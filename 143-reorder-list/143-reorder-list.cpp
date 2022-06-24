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
    void reorderList(ListNode* head) {
        stack<ListNode*>st;
        ListNode* slow=head;
        ListNode* fast=head;
        st.push(slow);
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            st.push(slow);
            fast=fast->next->next;
        }
        st.pop();
        ListNode* slowest=slow;
        ListNode* itr=slow->next;
        
        if(fast==nullptr) slow=st.top(),st.pop();
        
        ListNode* prev=slow;
        
        if(fast==nullptr) slow->next=slowest,slowest->next=nullptr;
        else slow->next=nullptr;

        while(!st.empty()&&itr!=nullptr){
            ListNode* top=st.top();
            st.pop();
            
            ListNode* itrnext=itr->next;
            //cout<<top->val<<" "<<itr->val<<" "<<prev->val<<"\n";
            top->next=itr;
            itr->next=prev;
            prev=top;
            itr=itrnext;
        
        }
        
    }
};