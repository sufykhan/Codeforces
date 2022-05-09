class Solution {
public:
    vector<vector<int>>ans;
    
    void dfs(int i,vector<vector<int>>&arr,vector<int>val,vector<bool>&vis){
        
        if(i==arr.size()-1){
            ans.push_back(val);
            return;
        }
        
        for(auto x:arr[i]){
            
            if(!vis[x]){
                val.push_back(x);
                vis[x]=true;
                dfs(x,arr,val,vis);
                vis[x]=false;
                val.pop_back();
            }
            
        }
        
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        vector<int>val;
        vector<bool>vis(graph.size(),false);
        val.push_back(0);
        dfs(0,graph,val,vis);
        return ans;
    }
};