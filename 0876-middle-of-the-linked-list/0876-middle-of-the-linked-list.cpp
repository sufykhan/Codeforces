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
    ListNode* middleNode(ListNode* head) {
        int cnt=0,tot=0;
        ListNode* ans=head;
        while(head!=nullptr){
            head=head->next;
            cnt++;
        }
        while(tot<cnt/2){
            ans=ans->next;
            tot++;
        }
        return ans;
    }
};