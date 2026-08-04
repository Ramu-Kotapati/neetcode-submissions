class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0;
        unordered_set<char> charset(s.begin(),s.end());
        for(char c : charset)
        {
            int l=0;
            int count=0;
            for(int r=0;r<s.size();r++)
            {
                if(s[r]==c)
                {
                    count++;
                }
                if(r-l+1-count>k)
                {
                    if(s[l]==c)
                    count--;
                    l=l+1;
                }
                res=max(res,r-l+1);
            }

        }
        return res;
    }
};
