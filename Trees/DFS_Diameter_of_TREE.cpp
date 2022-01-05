#include <bits/stdc++.h>
using namespace std;


int x;

void dfsUtil(int node,int n,vector<vector<int>>adj,int &maxi,bool visited[],int count){
    visited[node] = true;
    count++;
    for(int i=0;i<adj[node].size();i++){
        if(visited[adj[node][i]] == false){
            if(count>maxi){
                maxi = count;
                x=adj[node][i];
            }
            dfsUtil(adj[node][i],n,adj,maxi,visited,count);
        }
    }
}
void dfs(int node,int n,vector<vector<int>>adj,int &maxi){
    int count = 0;
    bool visited[n+1];
    for(int i=0;i<n+1;i++){
        visited[i] =false;
    }
    dfsUtil(node,n,adj,maxi,visited,count+1);
}
int diameter(vector<vector<int>>adj,int n){
    int maxi=INT_MIN;
    dfs(1,n,adj,maxi);
    dfs(x,n,adj,maxi);
    return maxi;
}

int main()
{
	int n = 5;

	/* Constructed tree is
		1
		/ \
		2 3
	/ \
	4 5 */
	// list<int>* adj = new list<int>[n + 1];
    vector<vector<int>>adj(n+1,vector<int>());

	adj[1].push_back(2);
	adj[2].push_back(1);
	adj[1].push_back(3);
	adj[3].push_back(1);
	adj[2].push_back(4);
	adj[4].push_back(2);
	adj[2].push_back(5);
	adj[5].push_back(2);



	cout << "Diameter of the given tree is "<< diameter(adj, n) << endl;
	return 0;
}
