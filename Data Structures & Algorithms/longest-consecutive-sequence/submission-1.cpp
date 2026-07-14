class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res=0,expe=nums[0],sequence=0,i=0;
        while(i<nums.size())
        {

           if(expe!=nums[i])
           {
            expe=nums[i];
            sequence=0;
           }
           while(i<nums.size()&&expe==nums[i])
           {
            i++;
           }
           sequence++;
           expe++;
        res=max(res,sequence);
           
        }
        return res;
    }
};
