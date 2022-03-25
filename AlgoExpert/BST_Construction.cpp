#include <vector>
using namespace std;

class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val) {
    value = val;
    left = nullptr;
    right = nullptr;
  }

	
  BST &insert(int val) {
    // Write your code here.
    // Do not edit the return statement of this method.
		BST *newR=new BST(val);
		BST *root=this;
		BST *prev=nullptr;
		
		while(root!=nullptr){
		   prev=root;
			 if(root->value>val){
				 root=root->left;
			 }
			 else{
				 root=root->right;
			 }
		}
		if(prev==nullptr){
			root=newR;
		}
		else if(prev->value>val){
			prev->left=newR;
		}
		else{
			prev->right=newR;
		}
	
    return *this;
  }

  bool contains(int val) {
    // Write your code here.
		BST *root=this;
		while(root!=nullptr){
			if(val==root->value){
					return true;
		  }
		  else if(val>root->value){
				root=root->right;
		  }
		  else{
			 	root=root->left;
			}
		}
		
    return false;
  }

	int getMin(){
		if(left==nullptr){
			return value;
		}else{
			return left->getMin();
		}
	}
	
	BST &remove(int val,BST * par=nullptr) {
   BST* curr=this;
	 while(curr!=nullptr){
		 if(curr->value>val){
			 par=curr;
			 curr=curr->left;
		 }
		 else if(val>curr->value){
			 par=curr;
			 curr=curr->right;
		 }
		 else{
			 if(curr->left!=nullptr && curr->right!=nullptr){
				 curr->value=curr->right->getMin();
				 curr->right->remove(curr->value,curr);
			 }
			 else if(par==nullptr){
				 if(curr->left!=nullptr){
					 curr->value=curr->left->value;
					 curr->right=curr->left->right;
					 curr->left=curr->left->left;
				 }
				 else if(curr->right!=nullptr){
					 curr->value=curr->right->value;
					 curr->left=curr->right->left;
					 curr->right=curr->right->right;
				 }
			 }
			 else if(par->left==curr){
				 par->left=curr->left!=nullptr?curr->left:curr->right;
			
			 }
			 else if(par->right==curr)
			 {
				  par->right=curr->left!=nullptr?curr->left:curr->right;
			 }
			 break;
		 }
	 }
		return *this;
// 		while(true){
			
// 		}
		
// 		BST *root=this;
// 		BST *prev=nullptr;
// 		while(root!=nullptr && root->value!=val){
// 			prev=root;
// 			if(root->value>val) root=root->left;
// 			else root=root->right;
// 		}
		
// 		if(root==nullptr){
// 			return *this;
// 		}
		
// 		      if(root->left==nullptr && root->right==nullptr){
// 						 if(prev->left!=nullptr && prev->left->value==val){
// 							 prev->left=nullptr;
// 						 }
// 						 else if(prev->right!=nullptr && prev->right->value==val){
// 							 prev->right=nullptr;
// 						 }
// 					}
// 				  else if(root->left!=nullptr && root->right==nullptr){
// 							root->value=root->left->value;
// 						  root->left=nullptr;
// 					}
// 				  else if(root->right!=nullptr&&root->left==nullptr){
// 							root->value=root->right->value;
// 						  root->right=nullptr;
// 					}
// 				  else{
// 							BST *start=root->right;
// 						  BST *ps=nullptr;
// 						  while(start->left!=nullptr){
// 								ps=start;
// 								start=start->left;
// 							}
// 						  if(ps!=nullptr){
// 								ps->left=start->right;
// 							}
// 						  else {root->right=start->right;
// 						  }
// 						  root->value=start->value;
						  
// 					}
		
// 	  return *this;	
	}
 
};
