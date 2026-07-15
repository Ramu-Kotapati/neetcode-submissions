class Solution {
public:
    bool isPalindrome(string s) {
     transform(s.begin(),s.end(),s.begin(),::tolower);//(start,end,destination of transformed string , operation)
    string clean;
    for(int i=0;i<s.size();i++)
    {
        if(!isalnum(s[i]))
        {
            continue;
        }
        clean.push_back(s[i]);
    }
     int i=0;
    int j=clean.size()-1;

    while(i<j)
    {
        if(clean[i]==clean[j])
        {
            i++;
            j--;
        }
        else
        return false;
    }
    return true;


    }

      

};


