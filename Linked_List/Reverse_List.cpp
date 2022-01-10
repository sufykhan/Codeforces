#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
}
class Solution
{
    public:
    //Function to reverse a linked list.
     struct Node* rev(struct Node *head,struct Node *prev){
       
       
       Node* curr=head;
       Node* next1=head->next;
       
       curr->next=prev;
       if(next1==nullptr) return curr;
       rev(next1,head);
       
     }
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* prev=nullptr;
        Node* ans=rev(head,prev);
        return ans;
    }
    
};
void printList(Node* he){
    Node* head=he;
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    int T,n,x;
    cin>>T;
    cin>>x;
    Node* head=nullptr,tail=nullptr;
    head=new Node(x);
    tail=head;
    for(int i=1;i<T;i++){
        cin>>x;
        tail->next=new Node(x);
        tail=tail->next;
    }

    Solution obj;
    head=obj.reverseList(head);
    printList(head);
}