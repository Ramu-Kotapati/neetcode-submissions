class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res=0;
        unordered_set<int> set(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int seq=0,num=nums[i];
            while(set.find(num)!=set.end())
            {
                seq++;
                num++;
            }
            res=max(res,seq);
        }

        return res;
    }
};
