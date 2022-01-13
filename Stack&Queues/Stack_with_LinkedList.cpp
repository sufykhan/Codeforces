#include "bits/stdc++.h"
using namespace std;

struct LinkedList{
    int data;
    LinkedList *next;
    LinkedList(int x){
        data=x;
        next=nullptr;
    }
};
class Stack{
      LinkedList *top;
      public:
        Stack(){
            top=nullptr;
        }
        void push(int x);
        int pop();  
};

void Stack::push(int x){
    LinkedList *temp=new LinkedList(x);
    temp->next=top;
    top=temp;
}
int Stack::pop(){
    if(top==nullptr) return -1;
    int ans=top->data;
    top=top->next;
    return ans;
}

int main(){
    Stack* s=new Stack();
    s->push(1);
    s->push(2);
    s->push(3);
    s->push(4);

    cout<<s->pop()<<"\n";
    cout<<s->pop()<<"\n";
    cout<<s->pop()<<"\n";
    cout<<s->pop()<<"\n";
}
