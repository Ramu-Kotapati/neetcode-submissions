class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int> res;
       for(int i=0;i<nums.size();i++)
       {
        int val=1;
        for(int j=0;j<nums.size();j++)
        {
            if(j==i)
            {
                continue;
            }
            val=nums[j]*val;
        }
        res.push_back(val);
       }
       return res;
    }
};
