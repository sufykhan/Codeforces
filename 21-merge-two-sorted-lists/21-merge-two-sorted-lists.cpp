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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1==nullptr) return l2;
        if(l2==nullptr) return l1;
        ListNode* l3=new ListNode(0);
        ListNode* ans=l3;
        while(l1!=nullptr&&l2!=nullptr){
            
            if(l1->val>l2->val){
                l3->next=new ListNode(l2->val);
                l3=l3->next;
                l2=l2->next;
            }
            else{
                l3->next=new ListNode(l1->val);
                l3=l3->next;
                l1=l1->next;
            }
        }
        while(l1!=nullptr){
                l3->next=new ListNode(l1->val);
                l3=l3->next;
                l1=l1->next;
        }
        while(l2!=nullptr){
                l3->next=new ListNode(l2->val);
                l3=l3->next;
                l2=l2->next;
        }
        return ans->next;     
        
    }
};