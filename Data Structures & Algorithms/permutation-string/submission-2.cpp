class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> count1;
        for(char c : s1)
        {
            count1[c]++;
        }
        int need=count1.size();
        for(int i=0;i<s2.size();i++)
        {
            unordered_map<char,int> count2;
            int cur=0;
            for(int j=i;j<s2.size();j++)
            {
                count2[s2[j]]++;
                if(count2[s2[j]]>count1[s2[j]])
                {
                    break;
                }
                if(count1[s2[j]]==count2[s2[j]])
                {
                    cur++;
                }
                if(cur==need)
                {
                    return true;
                }
            }
        }

        return false;
    }
};
