// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int find(int x,vector<int>&parent){
        if(parent[x]==x){
            return x;
        }
        return parent[x]=find(parent[x],parent);
    }
    
    void Union(int x,int y,vector<int>&rank,vector<int>&parent){
        int xp=find(x,parent);
        int yp=find(y,parent);
      
        if(rank[xp]>rank[yp]){
            parent[yp]=xp;
        }
        else if(rank[xp]<rank[yp]){
            parent[xp]=yp;
        }
        else{
            parent[xp]=yp;
            rank[yp]++;
        }
    }
    int spanningTree(int V, vector<vector<int>> v[])
    {
        vector<vector<int>>adj;
        for(int i=0;i<V;i++){
            for(auto &x:v[i]){
                adj.push_back({i,x[0],x[1]});
            }
        }
       sort(adj.begin(),adj.end(),[](const vector<int>&a,const vector<int>&b){ return a[2]<b[2];});
       
       int ans=0;
       vector<int>parent(V);
       vector<int>rank(V);
       for(int i=0;i<V;i++){
           parent[i]=i;
           rank[i]=1;
       }
       
       for(auto &x:adj){
           
           if(find(x[1],parent)!=find(x[0],parent)){
               Union(x[0],x[1],rank,parent);
               ans+=x[2];
           }
           
       }
       return ans;
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