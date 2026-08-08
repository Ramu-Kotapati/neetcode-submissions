class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        priority_queue<pair<int,int>> maxheap;
        
    
        for(int i=0;i<nums.size();i++)
        {
            maxheap.push({nums[i],i});
            if(i>=k-1)
            {
                while(maxheap.top().second<=i-k)
                {
                    maxheap.pop();
                }
                res.push_back(maxheap.top().first);
            }
        }

        return res;

    }
};
