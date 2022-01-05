vector<int> leftView(Node *root)
{
    //preorderRecurive(root);
   
   vector<int>v={};
   if(root==nullptr) return v;
   queue<pair<Node*,int>>q;
   Node* cur=root;int d=0;
   q.push({cur,d});
  
   //v.push_back(cur->data);
    
 
   while(!q.empty()){
     Node* curr=(q.front()).first; 
     d=(q.front()).second;
     
     //v.push_back(curr->data);
     
     if(v.size()==d) v.push_back(curr->data);
    
     if(curr->left!=nullptr){
        
         q.push({curr->left,d+1});
         
     }
     
     if(curr->right!=nullptr){
        
         q.push({curr->right,d+1});
        
     }
      q.pop();
   }
   return v;
}