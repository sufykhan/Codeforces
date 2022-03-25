#include <vector>
using namespace std;

class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
};

void inOrderTraverse(BST *tree, vector<int> &a) {
  // Write your code here.
	if(tree!=nullptr){
		inOrderTraverse(tree->left,a);
		a.push_back(tree->value);
		inOrderTraverse(tree->right,a);
		
	}
}

void preOrderTraverse(BST *tree, vector<int> &a) {
  // Write your code here.
	if(tree!=nullptr){
		a.push_back(tree->value);
		preOrderTraverse(tree->left,a);
		
		preOrderTraverse(tree->right,a);
		
	}
}

void postOrderTraverse(BST *tree, vector<int> &a) {
  if(tree!=nullptr){
		
		postOrderTraverse(tree->left,a);
		
		postOrderTraverse(tree->right,a);
		a.push_back(tree->value);
		
	}
}
