struct Node{
    int data;
    struct Node* next;
    struct Node* bottom;

    Node(int x){
        data=x;
        next=NULL;
        bottom=NULL;
    }
};
void mergeSortedList(Node* headPoint,Node* ref1){
       Node* l1=headPoint;
       Node* l2=ref1;
       Node* prevl2;
       Node* prevl1;
       while(l1!=nullptr && l2!=nullptr){
            if(l1!=nullptr && l2!=nullptr && l1->data>=l2->data){
                while(l1!=nullptr && l2!=nullptr && l1->data>=l2->data){
                    prevl2=l2;
                    l2=l2->bottom;
                }
                prevl2->bottom=l1;
            }
            else{
                while(l1!=nullptr && l2!=nullptr && l2->data>=l1->data){
                    prevl1=l1;
                    l1=l1->bottom;
                }
                if(prevl1!=nullptr) prevl1->bottom=l2;
                
            }
       }
}
Node * flatten(Node *root)
{
    if(root==nullptr) return root;
    
    Node* head=root;
    Node* ref1=root->next;
   
    Node* headPoint;
    Node* prevHeadPoint=nullptr;
    
    while(ref1!=nullptr){
       //if(head->data>ref1->data) swap(head,ref1);
       headPoint=head;
       while(headPoint!=nullptr && ref1!=nullptr && headPoint->data<ref1->data){
           prevHeadPoint=headPoint;
           headPoint=headPoint->bottom;
       }
       if(prevHeadPoint!=nullptr) prevHeadPoint->bottom=ref1;
       
       mergeSortedList(headPoint,ref1);
       
      
       head=head->next;
       ref1=ref1->next;
       
    }
    return root;
    
}

int Solution::findMedian(vector<vector<int> > &A) {
        int n=A.size();
        int m=A[0].size();
        Node* headA=new Node(0);
        Node* head=headA;
        for(int j=0;j<m;j++){
            headA->next=new Node(A[0][j]);
            headA=headA->next;
            
            Node* headA1=headA;
            for(int i=0;i<n;i++){
                headA1->bottom=new Node(A[i][j]);
                headA1=headA1->bottom;
            }
           
        }
        head=head->next;
        Node* ans=flatten(head);
        Node* xx=ans;int cnt=0;
        while(xx!=nullptr){
            xx=xx->next;
            cnt++;
        }
        cnt=(cnt+1)/2;
        while(cnt--){
            ans=ans->next;
        }

        return ans->data;


}
