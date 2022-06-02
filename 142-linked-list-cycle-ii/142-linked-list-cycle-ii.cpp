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
    ListNode *detectCycle(ListNode *prev) {
        ListNode* fast=prev;
        ListNode* slow=prev;
        int flag=1;
        while(slow!=fast||flag==1){
            flag=0;
            if(fast==nullptr || fast->next==nullptr){  //this edge case when there is no cycle.
                return nullptr;
            }
            fast=fast->next->next;
            slow=slow->next;
        }
        while(slow!=prev){
            prev=prev->next;
            slow=slow->next;
        }
        return slow;
    }
};