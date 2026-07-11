class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int> m1;
        unordered_map<char , int> m2;

        for(char x : s)
        {
         m1[x]++;
        }

       for(char y : t)
        {
         m2[y]++;
        }
        if(m1==m2)
        return true;
        return false;
    }
};
