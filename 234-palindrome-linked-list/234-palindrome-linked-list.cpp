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
    bool isPalindrome(ListNode* head) {
	    
        //Here we are counting the length of the linked list
        int cnt=0,flag=0;
        ListNode* root=head;
        while(root!=nullptr){
            root=root->next;
            cnt++;
        }
        flag=cnt%2;  //to check if we need to skip middle element or not.
        cnt=cnt/2;
        
        //Here we are reversing the half of the linked list
        // Ex.=  1->2->3->3->2->1 converted to  1<-2<-3  3->2->1
        ListNode* prev=nullptr;
        ListNode* temp;
        ListNode* head1=head;
        
        while(head1!=nullptr&& cnt--){
            temp=head1->next;
            head1->next=prev;
            prev=head1;
            head1=temp;
        }
        
        //Reverse Linked List starts at prev, Forward part starts at head1;
        
        if(flag){
            head1=head1->next;
        }
        
        //Comparison starts
        
        while(head1!=nullptr){
            if(head1->val==prev->val){
                head1=head1->next;
                prev=prev->next;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};