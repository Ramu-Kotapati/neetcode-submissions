class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(char c : s)
        {
          if(isalnum(c))
          {
            c=tolower(c),str.push_back(c);
          }
        }
        string temp=str;
        reverse(temp.begin(),temp.end());//using reverse
        // str == string(str.rbegin(), str.rend());
        if(str==temp)
        return true;
        return false;
    }
};
