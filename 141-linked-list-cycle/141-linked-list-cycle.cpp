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
    bool hasCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        int flag=1;
        while(slow!=fast||flag==1){
            flag=0;
            if(fast==nullptr ||fast->next==nullptr){
                return false;
            }
            fast=fast->next->next;
            slow=slow->next;
        }
        return true;
    }
};