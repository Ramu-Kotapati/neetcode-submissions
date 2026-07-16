class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     for(int i=0;i<nums.size();i++)
     {
        int diff=target-nums[i];//key element for binary search
        int l=i+1;
        int h=nums.size()-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(diff==nums[mid])
            {
                return {i+1,mid+1};
            }
           else if(diff>nums[mid])
            {
               l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
     }
     return {};


    }
};
