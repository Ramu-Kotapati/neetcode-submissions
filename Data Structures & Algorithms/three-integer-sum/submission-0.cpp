class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>res;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int  k=j+1;k<nums.size();k++)
                {
                    if(nums[i]+nums[j]+nums[k]==0&&i!=j!=k)
                    {
                      res.insert({nums[i],nums[j],nums[k]});
                    }
                }
            }
        }
        vector<vector<int>> result(res.begin(),res.end());

        return result;
    }
};
