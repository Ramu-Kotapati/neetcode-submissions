class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> vec;
        for(int i=0;i<nums.size();i++)
        {
             vec.push_back({nums[i],i});
        }
        sort(vec.begin(),vec.end());
        int i=0;
        int j=nums.size()-1;
        while(i<j)
        {
         int sum=vec[i].first+vec[j].first;
         if(sum==target)
         {
            return {min(vec[i].second,vec[j].second),
                    max(vec[i].second,vec[j].second)};
         }
         else if(sum<target)
         {
            i++;
         }
         else
         {
            j--;
         }
         
         
         
        }
        return {};
    }
};
