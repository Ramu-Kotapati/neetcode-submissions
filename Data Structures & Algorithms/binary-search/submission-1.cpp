class Solution {
public:
    int binsearch(int l,int h,vector<int>& nums, int target)   //using recursion
    {
        if(l>h)
        return -1;
        int mid=(l+h)/2;
        if(nums[mid]==target)
        return mid;
        else if(nums[mid]<target)
        {
            return binsearch(mid+1,h,nums,target);
        }
        else
        {
            return binsearch(l,mid-1,nums,target);
        }
    }


    int search(vector<int>& nums, int target) {
        return binsearch(0,nums.size()-1,nums,target);
    }
};
