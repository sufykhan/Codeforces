using namespace std;

class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
  }

  void insert(int value) {
    if (value < this->value) {
      if (left == nullptr) {
        left = new BST(value);
      } else {
        left->insert(value);
      }
    } else {
      if (right == nullptr) {
        right = new BST(value);
      } else {
        right->insert(value);
      }
    }
  }
};

BST *minHeightBst(vector<int> array,int l=0,int r=INT_MAX) {
  // Write your code here.
	if(l>=r){
		return nullptr;
	}
	if(r==INT_MAX) r=array.size();
	int mid=l+(r-l)/2;
	BST* root=new BST(array[mid]);
	root->left=minHeightBst(array,l,mid);
	root->right=minHeightBst(array,mid+1,r);
  return root;
}
