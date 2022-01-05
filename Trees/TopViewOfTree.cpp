class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
    
        vector<int>v={};
        if(root==nullptr) return v;
        
        queue<pair<Node*,pair<int,int>>>q;
        q.push({root,{0,0}});
        int mini=0,maxi=-1;
        while(!q.empty()){
            
            Node* curr=(q.front()).first;
            int level=((q.front()).second).first;
            int val=((q.front()).second).second;
            
            q.pop();
            // if(level==abs(val)){
            //     if(val>=0) v.insert(v.begin(),curr->data);
            //     else v.push_back(curr->data);
            // }
            
            if(val>maxi) v.insert(v.begin(),curr->data),maxi=val;
            if(mini>val) v.push_back(curr->data),mini=val;
            
            if(curr->left!=nullptr) q.push({curr->left,{level+1,val+1}});
            if(curr->right!=nullptr) q.push({curr->right,{level+1,val-1}});
            
        }
        return v;
    }


            
};

/* Bottom View of the Tree*/

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int>v={};
        if(root==nullptr) return v;
        
        queue<pair<Node*,int>>q;
        q.push({root,0});
        
        int val;
        map<int,int>m;
        
        while(!q.empty()){
              Node* curr=q.front().first;
              val=q.front().second;
              q.pop();
              
              m[val]=curr->data;
              
              if(curr->left!=nullptr) q.push({curr->left,val-1});
              if(curr->right!=nullptr) q.push({curr->right,val+1});
        }
        for(auto x:m){
            v.push_back(x.second);
        }
        return v;
    }
};