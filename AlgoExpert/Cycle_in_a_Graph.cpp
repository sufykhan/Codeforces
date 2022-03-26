#include <vector>
using namespace std;

bool dfs(int node,vector<vector<int>>edges,vector<int>&vis){
	vis[node]=1;
	for(int i=0;i<edges[node].size();i++){
		if(vis[edges[node][i]]==1){
			return true;	
		}
		if(vis[edges[node][i]]==0 && dfs(edges[node][i],edges,vis)){
			return true;
		}
		
	}
	vis[node]=2;
	return false;
}

bool cycleInGraph(vector<vector<int>> edges) {
  // Write your code here.
	int n=edges.size();
	vector<int>vis(n+1,0);

	for(int i=0;i<n;i++){
		if(vis[i]==0){
			if(dfs(i,edges,vis)){
				return true;
			}
		}
	}
	
  return false;
}
