class Solution {
   public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> closetoopen= {{')', '('}, {']', '['}, {'}', '{'}};
        for (char c : s) {
            if (closetoopen.find(c) != closetoopen.end()) {
                if (!st.empty() && st.top() == closetoopen[c]) {
                    st.pop();
                } else {
                    return false;
                }
            }
            else
            st.push(c);
        }
        if (st.empty())
        return true;
        return false;

    }
};
