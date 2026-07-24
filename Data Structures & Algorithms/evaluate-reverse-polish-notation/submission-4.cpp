class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<string> stk;
            for (string c : tokens) {
                if (c!="+"&&c!="-"&&c!="*"&&c!="/") {
                    stk.push(c);
                } else {
                    int b = stoi(stk.top());
                    stk.pop();
                    int a = stoi(stk.top());
                    stk.pop();
                    if (c == "+") {
                        int res = a + b;
                        stk.push(to_string(res));
                    } else if (c == "-") {
                        int res = a - b;
                        stk.push(to_string(res));
                    } else if (c == "*") {
                        int res = a * b;
                        stk.push(to_string(res));
                    } else {
                        int res = a / b;
                        stk.push(to_string(res));
                    }
                }
            }
        return stoi(stk.top());
    }
};
