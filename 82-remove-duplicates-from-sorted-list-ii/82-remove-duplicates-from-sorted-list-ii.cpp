/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=nullptr;
        bool flag=false;
        while(curr!=nullptr){
            
            if(prev!=nullptr && curr->val==prev->val){
                prev->next=curr->next;
                curr=prev->next;
                flag=true;
               
            }
            else{
                if(flag){
                    prev->val=curr->val;
                    prev->next=curr->next;
                    curr=prev->next;
                    flag=false;
                }
                else{
                prev=curr;
                curr=curr->next;
                }
                
            }
        }
        if(flag){
            ListNode* x=head;
            ListNode* y=nullptr;
            while(prev->val!=x->val){
                y=x;
                x=x->next;
            }
            if(y!=nullptr) y->next=nullptr;
            else return nullptr;
            
        }
        return head;
    }
};