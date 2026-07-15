class Solution {
public:
    bool isPalindrome(string s) {
        string st;
        for(char x : s)
        {
            if(x>='a'&&x<='z'
                ||x>='A'&&x<='Z'
                  || x>='0'&&x<='9')
                  {
                         if(x>='A'&&x<='Z')
                         {
                           int lower=x-'A'+'a';//lower conversion
                           st.push_back(lower);
                         } 
                         else
                         st.push_back(x);
                  }
            
        }
        int i=0;
        int j=st.size()-1;
        while(i<j)
        {
            if(st[i]==st[j])
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
