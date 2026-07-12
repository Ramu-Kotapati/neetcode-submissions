class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     
      vector<int> res;
      int pro=1;
      int zerocount=0;
      for(int num : nums)
      {
        if(num==0)
        zerocount++;
        else
        pro=pro*num;
      }
      if(zerocount>1)
      return vector<int>(nums.size(),0);

      for(int i=0;i<nums.size();i++)
      {
        if(zerocount==1)
        {
            if(nums[i]==0)
            res.push_back(pro);
            else
           res.push_back(0);
        }

        else
        {
          res.push_back(pro/nums[i]);
        }
      }
      
      return res;





    }

};
