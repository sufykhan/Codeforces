#include <bits/stdc++.h>
using namespace std;
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int>s;
    stack<int>temp;
    
    MinStack() {
     
    }
    
    void push(int val) {
        s.push(val);
        if(temp.empty()){
            temp.push(val);
        }
        else{
            temp.push(min(s.top(),temp.top()));
        }
    }
    
    void pop() {
        s.pop();
        temp.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return temp.top();
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