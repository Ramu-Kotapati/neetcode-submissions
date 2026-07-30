class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]>=nums[l]) //left sorted array
            {
                if(target>nums[mid])
                    l=mid+1;// Search the right half because the target is greater than nums[mid]
                else if(target<nums[l])
                    l=mid+1;// Search the right half because the target is smaller than nums[l]

                else
                    r=mid-1; // Search the left half because the target lies between nums[l] and nums[mid]
            }
            else  // right sorted array
            {
               if(target<nums[mid])
                 r=mid-1; // Search the left half because the target is smaller than nums[mid]

               else if(target>nums[r])
                 r=mid-1;// Search the left half because the target is greater than nums[r]
                else
                 l=mid+1; // Search the right half because the target lies between nums[mid] and nums[r]
            }
        }

        return -1;
    }
};
