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
    ListNode* mergeTwoLists(ListNode* l11, ListNode* l22) {
        
        if(l11==nullptr) return l22;
        if(l22==nullptr) return l11;
        
        if(l11->val<l22->val){
            swap(l11,l22);
        }
        
        ListNode* l1=l11;
        ListNode* l2=l22;
        ListNode* prevl2;
        ListNode* prevl1;
        
        while(l1!=nullptr && l2!=nullptr){
            
            if(l1!=nullptr && l2!=nullptr && l1->val>=l2->val){
                while(l1!=nullptr && l2!=nullptr && l1->val>=l2->val){
                    prevl2=l2;
                    l2=l2->next;
                }
                prevl2->next=l1;
            }
            else{
                while(l1!=nullptr && l2!=nullptr &&l2->val>=l1->val){
                    prevl1=l1;
                    l1=l1->next;
                }
                prevl1->next=l2;
            }
       }
        return l22;
        
    }
};