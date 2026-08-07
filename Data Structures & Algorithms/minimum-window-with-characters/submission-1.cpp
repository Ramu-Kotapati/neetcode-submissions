class Solution {
public:
    string minWindow(string s, string t) {
        int min=INT_MAX;
        int start=-1,count=0,l=0,r=0;

        vector<int>hash(256,0);
        for(int i=0;i<t.size();i++)
        {
               hash[t[i]]++;
        }

        while(r<s.size())
        {
            if(hash[s[r]]>0)
            {
                count++;
            }
            hash[s[r]]--;

            while(count==t.size())
            {
               if(r-l+1<min)
               {
                min=r-l+1;
                start=l;
                
               }
               hash[s[l]]++;
               if(hash[s[l]]>0)
               {
                count--;
               }

              l++;

            }

             r=r+1;
        }

        if(start==-1) return "";
        return s.substr(start,min);
    }
};
