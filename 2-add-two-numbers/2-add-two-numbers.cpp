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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* l3=new ListNode(0);
        ListNode* ans=l3;
        while(l1!=nullptr && l2!=nullptr){
            l3->next=new ListNode((l1->val+l2->val+carry)%10 );
            carry=(l1->val+l2->val+carry)/10;
            l1=l1->next;
            l2=l2->next;
            l3=l3->next;
        }
        while(l1!=nullptr){
            l3->next=new ListNode((carry+l1->val)%10);
            carry=(l1->val+carry)/10;
            l1=l1->next;
            l3=l3->next;
        }
        while(l2!=nullptr){
            l3->next=new ListNode((carry+l2->val)%10);
            carry=(l2->val+carry)/10;
            l2=l2->next;
            l3=l3->next;
        }
        if(carry!=0){
            l3->next=new ListNode(carry);
        }
        return ans->next;
    }
};