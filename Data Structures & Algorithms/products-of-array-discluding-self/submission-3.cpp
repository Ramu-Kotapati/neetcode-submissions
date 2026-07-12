class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         vector<int> res(nums.size(),1);
        int prefix =1;
         for(int i=0;i<nums.size();i++)
         {
          res[i]=prefix;
          prefix=prefix*nums[i];

          // res[i] = res[i - 1] * nums[i - 1]; or we can use this also.
         }
         int postfix=1;
         for(int i=nums.size()-1;i>=0;i--)
         {
          res[i]=res[i]*postfix;
          postfix=postfix*nums[i];
         }
         return res;
    }
};
