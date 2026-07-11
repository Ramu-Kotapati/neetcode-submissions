class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int &x : nums)
        {
            map[x]++;
        }
        priority_queue<pair<int,int>> heap;
        for(auto &y : map)
        {
            heap.push({y.second,y.first});
        }
        vector<int> res;
        for(int i=0;i<k;i++)
        {
            res.push_back(heap.top().second);
            heap.pop();
        }
        return res;
        
    }
};
