// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    struct sortBy {
        bool operator()(pair<int, int> const& a,pair<int, int> const& b)
        {
            return a.second > b.second;
        }
    };

    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<bool>vis(V,false);
        vector<int>dist(V,INT_MAX);
        dist[S]=0;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,sortBy>pq;
        
        pq.push({S,0});
        
        while(!pq.empty()){
            
            pair<int,int> front=pq.top();
            pq.pop();
            int node=front.first;
        
            vis[node]=true;
            
            for(auto &x:adj[node]){
                
                if(dist[x[0]]>=dist[node]+x[1]){
                    dist[x[0]]=dist[node]+x[1];
                    pq.push({x[0],dist[x[0]]});
                }
            }
            
        }
        return dist;
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
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}

  // } Driver Code Ends