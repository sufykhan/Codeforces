#include <iostream>
#include <stack>
using namespace std;
 
// Data structure to store a binary tree node
struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};
 
// Iterative function to perform inorder traversal on the tree    
/* Construct the following tree
           

                  3
                /   \
               /     \
              5       6
             / \
            /   \
           7     8

    */
void preorderIterative(Node* root){
          stack<Node*> s;
         
          Node* curr=root;
          while(!s.empty()||curr!=nullptr){
              if(curr!=nullptr){
                  cout<<curr->data<<" ";
                  s.push(curr);
                  curr=curr->left;
              }
              else{
                  Node* x= s.top();
                  s.pop();
                  curr=x->right;
              }
          }
}   
void inorderIterative(Node* root)
{
    stack<Node*>s;
    Node* curr = root;
    while(!s.empty()||curr!=nullptr) {
        if(curr!=nullptr) {
            s.push(curr);
            curr=curr->left;
        }else{
        Node* x=s.top();
        s.pop();
        cout<<x->data<<" ";
        curr=x->right;
        }
    }
    /* Construct the following tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8
    */
    
}
void preorder(Node* root)
{
    // if the current node is empty
    if (root == nullptr) {
        return;
    }
 
    // Display the data part of the root (or current node)
    cout << root->data << " ";
 
    // Traverse the left subtree
    preorder(root->left);
 
    // Traverse the right subtree
    preorder(root->right);
}

void inorderRecurive(Node* root){
    if(root==nullptr)
        return;
    inorderRecurive(root->left);
    cout<<root->data<<" ";
    inorderRecurive(root->right);
}
void preorderRecurive(Node* root){
    if(root==nullptr)
        return;
    cout<<root->data<<" ";    
    preorderRecurive(root->left);
    preorderRecurive(root->right);
}
 
int main()
{
    /* Construct the following tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8
    */

                  
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    inorderIterative(root);
    cout<<"\n";
    inorderRecurive(root);
    cout<<"\n";
    preorder(root);
    cout<<"\n";
    preorderRecurive(root);
    return 0;
}
