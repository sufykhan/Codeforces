using namespace std;

// This is an input class. Do not edit.
//Solution 1  (Time complexity O(n))
class BinaryTree {
public:
  int value;
  BinaryTree *left = nullptr;
  BinaryTree *right = nullptr;
  BinaryTree *parent = nullptr;

  BinaryTree(int value) { this->value = value; }
};

void inorder(BinaryTree* root,vector<BinaryTree*>&ans){
	  if(root==nullptr) {
			return ;
		}
	  inorder(root->left,ans);
	  ans.push_back(root);
	  inorder(root->right,ans);
}

BinaryTree *findSuccessor(BinaryTree *tree, BinaryTree *node) {
  // Write your code here.
	vector<BinaryTree*>ans;
	inorder(tree,ans);
	for(int i=0;i<ans.size();i++){
		if(ans[i]==node){
			if(i+1==ans.size()){
				return nullptr;
			}
			else{
				return ans[i+1];
			}
		}
	}
	
  return nullptr;
}

using namespace std;

// This is an input class. Do not edit.
//Solution 2 Time Complexity O(logn)
class BinaryTree {
public:
  int value;
  BinaryTree *left = nullptr;
  BinaryTree *right = nullptr;
  BinaryTree *parent = nullptr;

  BinaryTree(int value) { this->value = value; }
};

BinaryTree *xx(BinaryTree *node){
	BinaryTree *root=node;
	while(root->left!=nullptr){
		root=root->left;
	}
	return root;
} 
BinaryTree *xxr(BinaryTree *node){
	BinaryTree *root=node;
	while(root->parent!=nullptr && root->parent->right==root){
		root=root->parent;
	}
	return root->parent;
} 
BinaryTree *findSuccessor(BinaryTree *tree, BinaryTree *node) {
  // Write your code here.
	if(node->right!=nullptr){
	 return	xx(node->right);
	}
  return xxr(node);
}
