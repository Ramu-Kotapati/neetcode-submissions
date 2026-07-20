class Solution {
public:
    bool isValid(string s) {

        while(true)
        {
            int pos=string::npos;
            if((pos=s.find("()"))!=string::npos)
            {
                s.erase(pos,2);
                continue;
            }
            if ((pos = s.find("{}")) != string::npos) {
                s.erase(pos, 2);
                continue;
            }
            if ((pos = s.find("[]")) != string::npos) {
                s.erase(pos, 2);
                continue;
            }
            break;
        }
        return s.empty();
        }

};
