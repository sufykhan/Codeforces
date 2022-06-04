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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* root=head;
        ListNode* first=head;
        ListNode* ans;
        int n=0;
        if(head==nullptr) return head;
        while(first->next!=nullptr){
            first=first->next;
            n++;
        }
        n++;
        k=k%n;
        if(k==0) return head;
        k=(n-k)-1;
        while(root!=nullptr && k--){
            root=root->next;
        }
        ans=root->next;
        root->next=nullptr;
        first->next=head;
        return ans;
    }
};