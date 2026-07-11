class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        vector<char> hash(26,0);
        for(int i=0;i<s.size();i++)
        {
            hash[s[i]-97]++;
            hash[t[i]-97]--;
        }
        for(int count : hash)
        {
            if(count!=0)
            return false;
        }
        return true;

    }
};
