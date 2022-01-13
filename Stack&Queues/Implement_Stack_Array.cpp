#include <bits/stdc++.h>
using namespace std;

const int MAX=100;

class Stack{
    
    public:
    
    int top;
    int size;
    Stack(){
        top=-1;
        size=0;
    }
    int arr[MAX];
    void push(int x);
    int pop();
};

void Stack::push(int x){
    arr[size]=x;
    size++;
}
int Stack::pop(){
    
    if(size==0) return -1;
    int ans=arr[size-1];
    size--;
    return ans;
}

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(0);
    s.push(4);
    cout<<s.pop()<<"\n";
    cout<<s.pop()<<"\n";
    cout<<s.pop()<<"\n";
}