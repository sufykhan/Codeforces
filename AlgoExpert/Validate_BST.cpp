class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

bool validateBst(BST *tree,int min=INT_MIN,int max=INT_MAX) {
  if(tree==nullptr){
		return true;
	}
  if(tree->value>=max || tree->value<min){
		return false;
	}
	return validateBst(tree->left,min,tree->value)&&validateBst(tree->right,tree->value,max);
}
