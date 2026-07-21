class MinStack {
public:
    stack<int> stak;
    MinStack() {
        
    }
    
    void push(int val) {
        stak.push(val);
    }
    
    void pop() {
        stak.pop();
    }
    
    int top() {
        return stak.top();
    }
    
    int getMin() {
        stack<int> temp;
        int mini=stak.top();
        while(stak.size())
        {
            mini=min(mini,stak.top());
            temp.push(stak.top());
            stak.pop();
        }
        while(temp.size())
        {
            stak.push(temp.top());
            temp.pop();

        }
        return mini;
    }
};
