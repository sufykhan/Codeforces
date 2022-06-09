class MinStack {
public:
    int mini;
    stack<int>s;
    MinStack() {
        mini=INT_MAX;
    }
    
    void push(int val) {
        s.push(val);
        if(val<mini){
            mini=val;
        }
    }
    
    void pop() {
        int res=s.top();
        s.pop();
        stack<int>dummy=s;
        if(res==mini){
            mini=INT_MAX;
            while(!dummy.empty()){
                mini=min(mini,dummy.top());
                dummy.pop();
            }
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */