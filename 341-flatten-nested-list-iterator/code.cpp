// { Driver Code Starts
#include <bits/stdc++.h>

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};

using namespace std;

void printList(Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->bottom;
    }
}

Node* flatten (Node* root);

int main(void) {

	int t;
	cin>>t;
	while(t--){
    int n,m,flag=1,flag1=1;
    struct Node * temp=NULL;
	struct Node * head=NULL;
	struct Node * pre=NULL;
	struct Node * tempB=NULL;
	struct Node * preB=NULL;
		cin>>n;
        int work[n];
		for(int i=0;i<n;i++)
            cin>>work[i];
		for(int i=0;i<n;i++){
			m=work[i];
			--m;
			int data;
			scanf("%d",&data);
			temp = new Node(data);
			temp->next = NULL;
			temp->bottom = NULL;
			
			if(flag){
				head = temp;
				pre = temp;
				flag = 0;
				flag1 = 1;
			}
			else{
				pre->next = temp;
				pre = temp;
				flag1 = 1;
			}
			for(int j=0;j<m;j++){
				
				int temp_data;
				scanf("%d",&temp_data);
				tempB = new Node(temp_data);

				if(flag1){
					temp->bottom=tempB;
					preB=tempB;
					flag1=0;
				}
				else{
					preB->bottom=tempB;
					preB=tempB;
				}
			}
		}
		   Node *fun = head;
		   Node *fun2=head;

            Node* root = flatten(head);
            printList(root);
            cout<<endl;

	}
	return 0;
}
// } Driver Code Ends


/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
    
void mergeSortedList(Node* headPoint,Node* ref){
       Node* l1=headPoint;
       Node* l2=ref;
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
Node *flatten(Node *root)
{
    if(root==nullptr) return root;
    
    Node* head=root;
    Node* ref=root->next;
   
    Node* headPoint;
    Node* prevHeadPoint=nullptr;
    
    while(ref!=nullptr){
       //if(head->data>ref->data) swap(head,ref);
       headPoint=head;
       while(headPoint!=nullptr && ref!=nullptr && headPoint->data<ref->data){
           prevHeadPoint=headPoint;
           headPoint=headPoint->bottom;
       }
       if(prevHeadPoint!=nullptr) prevHeadPoint->bottom=ref;
       
       mergeSortedList(headPoint,ref);
       
      
       head=head->next;
       ref=ref->next;
       
    }
    
    return root;
    
}

