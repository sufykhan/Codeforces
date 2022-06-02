/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        
//         ListNode* head=headA;
//         ListNode* prev=headB;
//         ListNode* x;
//         while(head!=nullptr){
//             x=head->next;
//             head->next=prev;
//             prev=head;
//             head=x;
//         }
        
//         ListNode* fast=prev;
//         ListNode* slow=prev;
//         int flag=1;
//         while(slow!=fast||flag==1){
//             flag=0;
//             if(fast->next==nullptr){
//                 return nullptr;
//             }
//             fast=fast->next->next;
//             slow=slow->next;
//         }
//         while(slow!=prev){
//             prev=prev->next;
//             slow=slow->next;
//         }
//         return slow;
        ListNode *ptrA = headA, *ptrB = headB;
    while (ptrA != ptrB) { 
        ptrA = ptrA ? ptrA->next : headB;
        ptrB = ptrB ? ptrB->next : headA;
    }
    return ptrA;
        
        
    }
};