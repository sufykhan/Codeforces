using namespace std;

// This is an input class. Do not edit.
class BST {
public:
  int value;
  BST *left = nullptr;
  BST *right = nullptr;

  BST(int value) { this->value = value; }
};

void inorder(BST *tree,vector<int>&v){
	if(tree==nullptr){
		return;
	}
	inorder(tree->left,v);
	v.push_back(tree->value);
	inorder(tree->right,v);
}

int findKthLargestValueInBst(BST *tree, int k) {
  // Write your code here.
	vector<int>ans;
	inorder(tree,ans);
	return ans[ans.size()-k];
 
}
