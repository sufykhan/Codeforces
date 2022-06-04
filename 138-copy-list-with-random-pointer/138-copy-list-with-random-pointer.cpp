/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*,Node*>mp;
        
        Node* root=head;
        Node* ans=new Node(0);
        
        Node* ans1=ans;
        while(root!=nullptr){
            ans->next=new Node(root->val);
            mp[root]=ans->next;
            root=root->next;
            ans=ans->next;
        }
    
        Node* root1=head;
        ans1=ans1->next;
        Node* ans2=ans1;
        while(root1!=nullptr && ans1!=nullptr){
            if(root1->random!=nullptr) ans1->random=mp[root1->random];
            ans1=ans1->next;
            root1=root1->next;
        }
        return ans2;
    }
};