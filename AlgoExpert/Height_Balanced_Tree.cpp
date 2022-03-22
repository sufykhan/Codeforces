using namespace std;

// This is an input class. Do not edit.

// Time Complexity: O(n^2)
class BinaryTree {
public:
  int value;
  BinaryTree *left = nullptr;
  BinaryTree *right = nullptr;

  BinaryTree(int value) { this->value = value; }
};

int height(BinaryTree * root){
	if(root==nullptr){
		return 0;
	}
	return 1+max(height(root->left),height(root->right));
}
bool heightBalancedBinaryTree(BinaryTree *tree) {
  if(tree==nullptr) return true;
	int h=abs(height(tree->left)-height(tree->right));
	if(h>1){
		return false;
	}
  return heightBalancedBinaryTree(tree->left)&&heightBalancedBinaryTree(tree->right);
}

//***************************************************************************************************
using namespace std;

// This is an input class. Do not edit.

// Time Complexity: O(n) Space Complexity: O(h)

class BinaryTree {
public:
  int value;
  BinaryTree *left = nullptr;
  BinaryTree *right = nullptr;

  BinaryTree(int value) { this->value = value; }
};

struct Info{
	bool isValid;
	int h;
};


Info height(BinaryTree * root){
	if(root==nullptr){
		return Info({true,-1});
	}
	auto lh=height(root->left);
	auto rh=height(root->right);
	
	bool valid=lh.isValid && rh.isValid && abs(rh.h-lh.h)<=1;
	int h1= 1+max(lh.h,rh.h);
	return Info{valid,h1};
	
}
bool heightBalancedBinaryTree(BinaryTree *tree) {
 
	auto ans=height(tree);
  return ans.isValid;
}
