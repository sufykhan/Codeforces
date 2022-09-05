/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int dept=0;
    void recur(Node* root,int val){
        if(root==nullptr) return;
        dept=max(dept,val);
        for(auto x:root->children){
            recur(x,val+1);
        }
    }
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};
        queue<pair<Node*,int>>q;
        
        recur(root,0);
        
        vector<vector<int>>ans(dept+1,vector<int>());
        q.push({root,0});
        while(!q.empty()){
            auto xx=q.front();
            q.pop();
            Node* head=xx.first;
            int level=xx.second;
            
            
            ans[level].push_back(head->val);
            
            for(auto x:head->children){
                q.push({x,level+1});
            }
            
        }
        return ans;
    }
};