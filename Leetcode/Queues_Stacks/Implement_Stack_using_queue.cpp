#include <bits/stdc++.h>
using namespace std;

class MyStack{
public:
queue<int>q1;
    queue<int>q2;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
       while(!q2.empty()){
          q1.push(q2.front());
           q2.pop();
      }
      q2.push(x);
      while(!q1.empty()){
         q2.push(q1.front());
         q1.pop();
      }
     
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int x=q2.front();
        q2.pop();
        return x;
    }
    
    /** Get the top element. */
    int top() {
        return q2.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q2.empty();
    }

};

int main(void){
   MyStack* obj = new MyStack();
   obj->push(10);
   int param_2 = obj->pop();
   int param_3 = obj->top();
   bool param_4 = obj->empty();
    return 0;
}
