class MinStack {
public:
     stack<int> stk;
     stack<int> minstk;
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        int mini;
        if(minstk.empty())//or int mini=min(val,minstk.empty()?val:mini)
        mini=val;
        else
        mini=min(minstk.top(),val);
        minstk.push(mini);
    }
    
    void pop() {
        stk.pop();
        minstk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minstk.top();
    }
};
