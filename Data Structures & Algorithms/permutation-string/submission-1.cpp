class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
     
        int l=0;
        int n1=s1.size();
        int r=n1-1;

        while(r<s2.size())
        {

            string check=s2.substr(l,r-l+1);
            sort(check.begin(),check.end());
            if(check==s1)
            {
                return true;
            }
            else
            {
                l++;
                r++;
            }
        }
        return false;





    }
};
