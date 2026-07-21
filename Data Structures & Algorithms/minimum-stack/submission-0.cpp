class MinStack {
public:
    vector<int> stk;
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push_back(val);   
    }
    
    void pop() {
        stk.pop_back();
    }
    
    int top() {
        return stk.back();
    }
    
    int getMin() {
        vector<int> tmp;
        int mini=stk.back();
        while(stk.size())
        {
            mini=min(mini,stk.back());
            tmp.push_back(stk.back());
            stk.pop_back();
        }

        while(tmp.size())
        {
            stk.push_back(tmp.back());
            tmp.pop_back();
        }

        return mini;
    }
};
