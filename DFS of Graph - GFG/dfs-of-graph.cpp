// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int V,vector<int>adj[],vector<int>&ans,int i,vector<bool>&vis){
        
        if(i>=V){
            return;
        }
        for(auto x:adj[i]){
            if(!vis[x]){
                vis[x]=true;
                ans.push_back(x);
                dfs(V,adj,ans,x,vis);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        vector<bool>vis(V,false);
        vis[0]=true;
        ans.push_back(0);
        dfs(V,adj,ans,0,vis);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends