// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<int>dist(V,INT_MAX);
        vector<int>vis(V,false);
        
        dist[0]=0;
        for(int k=0;k<V-1;k++){
            int mini=INT_MAX,pos=0;
            for(int i=0;i<V;i++){
                if(!vis[i]&&mini>=dist[i]){
                    pos=i;
                    mini=dist[i];
                }
            }
            vis[pos]=true;
            
            for(auto x:adj[pos]){
               if(!vis[x[0]]) dist[x[0]]=min(dist[x[0]],x[1]);
            }
        }
        return accumulate(dist.begin(),dist.end(),0);
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends