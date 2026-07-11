class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<char> s1;
       vector<char> s2;
         for(char x : s)
         {
            s1.push_back(x);
         }
          for(char y : t)
         {
            s2.push_back(y);
         }
         sort(s1.begin(),s1.end());
         sort(s2.begin(),s2.end());
             if(s1==s2)
             return true;

             return false;
         

    }
};
