class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        vector<vector<int>> count(nums.size() + 1);
        for (int num : nums) {
            map[num]++;
        }

        for (auto& m : map) {
            count[m.second].push_back(m.first);
        }
        vector<int> res;
        for (int i = count.size() - 1; i > 0; i--) {
            for (int n : count[i]) {
                res.push_back(n);
                if (res.size() == k) return res;
            }
        }

        return res;
    }
};
