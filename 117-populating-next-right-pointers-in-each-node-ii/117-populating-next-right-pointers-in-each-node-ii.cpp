/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==nullptr) return root;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        
        while(!q.empty()){
            
            pair<Node*,int>ini=q.front();
            
            q.pop();
            
            if(!q.empty() && ini.second==q.front().second ){
                ini.first->next=q.front().first;
            }
            if(ini.first->left!=nullptr) q.push({ini.first->left,ini.second+1});
            if(ini.first->right!=nullptr) q.push({ini.first->right,ini.second+1});
            
        }
        
        return root; 
    }
};