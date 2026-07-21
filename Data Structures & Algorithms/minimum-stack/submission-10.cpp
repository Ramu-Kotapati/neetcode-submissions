class MinStack {
public:
    stack<long> stk;
    long min;
    MinStack() {
        
    }
    
    void push(int val) {
        if(stk.empty()){
            stk.push(0);
            min=val;
        }
        else
        {
            stk.push(val-min);
            if(val<min) min=val;
        }

    }
    
    void pop() {
        if(stk.empty())return ;
        long pop=stk.top();
        stk.pop();
        if(pop<0)
        min=min-pop;
    }
    
    int top() {
        long top=stk.top();
        if(top>0)
        return top+min;
        else
        return int(min);
        
    }
    
    int getMin() {
        return int(min);
    }
};
