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
        
        //Count total number of Nodes        
        int total_nodes=0;
        ListNode* dummy=head;
        while(dummy!=nullptr){
            total_nodes++;
            dummy=dummy->next;
        }
        
        n=total_nodes-n;  // Need to iterate this much to reach target node
        
        //Deleting the Target Node : Need previous node too
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(n--){
            prev=curr;
            curr=curr->next;
        }
        
        //Edge case handling if head is deleted 
        if(prev==nullptr){
            return head->next;
        }
        
        prev->next=curr->next;
        return head;
    }
};