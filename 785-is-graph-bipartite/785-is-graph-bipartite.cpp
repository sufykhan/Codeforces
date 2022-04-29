class Solution {
public:
    
    
    bool BFS(int i,vector<vector<int>>&graph,int val,vector<bool>&vis,vector<int>color){
        
        color[i]=val;
        vis[i]=true;
        
        for(auto x:graph[i]){
            if(!vis[x]){
                
                if(!BFS(x,graph,val^1,vis,color)){
                    return false;
                }
                
            }
            else{
                if(color[x]==color[i]){
                    return false;
                }
            }
        }
        return true;
        
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int val=0;
        vector<bool>vis(graph.size(),false);
        vector<int>color(graph.size(),-1);
        
        for(int i=0;i<graph.size();i++){
            if(!vis[i]){
                if(!BFS(i,graph,val,vis,color)){
                    return false;
                }
            }
        }
        return true;
    }
};