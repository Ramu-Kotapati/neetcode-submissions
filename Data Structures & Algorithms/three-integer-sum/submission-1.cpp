class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> result;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
          int j=i+1,k=nums.size()-1;
          while(j<k)
          {
            if(-nums[i]==nums[j]+nums[k])
            {
               result.insert({nums[i],nums[j],nums[k]});
               j++; k--;
            }
            else if(-nums[i]<nums[j]+nums[k])
            {
                k--;
            }
            else
            {
                j++;
            }
          }
        }
        vector<vector<int>>res(result.begin(),result.end());
        return res;
    }
};
