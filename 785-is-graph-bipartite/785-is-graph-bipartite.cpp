class Solution {
public:
    bool dfs(vector<vector<int>>&adj,vector<bool>&vis,vector<int>&val,int i){
        
        for(auto &x:adj[i]){
            if(vis[x]==true && val[x]==val[i]){
                return false;
            }
            else{
                if(!vis[x]){
                    vis[x]=true;
                    val[x]=val[i]^1;
                    if(!dfs(adj,vis,val,x)){
                        return false;
                    }
                }
            }
        }
        return true;
        
    }
    bool isBipartite(vector<vector<int>>& graph) {
       int V=graph.size();
        vector<bool>vis(V,false);
        vector<int>val(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                val[i]=0;
                if(!dfs(graph,vis,val,i)){
                    return false;
                }
            }
        }
        return true;
    }
};