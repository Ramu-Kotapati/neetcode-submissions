class Solution {
public:
    int findMin(vector<int> &nums) {
        int min=nums[0];  //or return *min_element(nums.begin(),nums.end());
        for(int num:nums)
        {
            if(num<min)
            {
                min=num;
            }
            
        }

        return min;
    }
};
