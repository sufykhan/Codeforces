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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode* ans=head;
        ListNode* root=head;
        while(root!=nullptr){
            root=root->next;
            cnt++;
        }
        cnt=cnt-n;
        while(cnt--){
            root=head;
            head=head->next;
        }
        if(root) root->next=head->next;
        else ans=head->next;
        return ans;
    }
};