class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         unordered_map<string,vector<string>> res;
         for(string s : strs)
         {
            string itsorted = s;
            sort(itsorted.begin(),itsorted.end());
            res[itsorted].push_back(s);
         }
         vector<vector<string>> result;
         for( auto it : res)
         {
            result.push_back(it.second);
         }
         return result;
    }
};
