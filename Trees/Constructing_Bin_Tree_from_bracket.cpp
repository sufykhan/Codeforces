//4(2(3)(1))(6(5))

#include "bits/stdc++.h"
using namespace std;

class Node(){
    int data;
    Node* left;
    Node* right;
    public:
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

int main(){
    string s="4(2(3)(1))(6(5))";
    stack<Node*> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            Node* target=st.top();
            i++;
            int val=s[i]-'0';
            Node* xx=new Node(val);
            if(target->left==nullptr){
                target->left=xx;
                if(s[i+1]!=')') st.push(xx);
            }
            else if(target->right==nullptr){
                target->right=xx;
                if(s[i+1]!=')') st.push(xx);
            }

        }
        else if(s[i]==')'){

        }
        else{
            int val=s[i]-'0';
            Node* xx=new Node(val);
            st.push(xx);
        }
    }
}