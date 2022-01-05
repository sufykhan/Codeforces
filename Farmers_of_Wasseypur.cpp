#include <bits/stdc++.h>
using namespace std;


void bfs(int node=1,vector<vector<int>>(&adj)[2],vector<int> &visited){
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        ans.push_back(curr);
        for(int i=0;i<adj[curr].size();i++){
            if(visited[adj[curr][i]] == 0){
                q.push(adj[curr][i]);
                visited[adj[curr][i]] = 1;
            }
        }
    }
}
    
void solve(){
    int n;cin>>n;
    vector<vector<int>>v(n,vector<int>());
    n--;
    while(n--){
        int x,y;cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    vector<int>val(n+1);
    for(int i=1;i<=n;i++){
        cin>>val[i];
    }
    bfs(1,v,visited);

}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}