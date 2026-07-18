class Solution {
public:
    int maxArea(vector<int>& nums) {
        int maxwater=0;
        for(int i=0;i<nums.size();i++)
        {
          for(int j=i+1;j<nums.size();j++)
          {
           int height=min(nums[i],nums[j]);
           int width=j-i;
           int area=height*width;
           if(area>maxwater)
           {
            maxwater=area;
           }
          }
        }
        return maxwater;
    }
};
