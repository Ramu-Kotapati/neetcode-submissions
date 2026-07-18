class Solution {
public:
    int maxArea(vector<int>& nums) {
        int maxwater=0;
        int i=0;
        int j=nums.size()-1;
        while(i<j)
        {
          int area=0;
          if(nums[i]==nums[j])
          {
            area=nums[i]*(j-i);
            i++;
            j--;
          }
          else if(nums[i]<nums[j])
          {
            area=nums[i]*(j-i);
            i++;
          }
          else
          {
            area=nums[j]*(j-i);
            j--;
          }
          maxwater=max(area,maxwater);
        }
        return maxwater;
    }
};
