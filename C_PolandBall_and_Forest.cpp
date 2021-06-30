#include <bits/stdc++.h>
using namespace std;

typedef long long intl;
#define rep(i, a, n) for (int i = a; i < n; i++)

intl n;
vector<intl> adj[10004];
long long cnt[2];

void DFS(intl start,vector<bool>&vis){
     rep(i,0,adj[start].size()){
         if(!vis[adj[start][i]]){
             vis[adj[start][i]]=true;
             DFS(adj[start][i],vis);
         }
     }
}
void solve()
{
    cin >> n;
    rep(i, 1, n+1)
    {
        intl v;
        cin >> v;
        adj[i].push_back(v);
        adj[v].push_back(i);
    }
    vector<bool>vis(n+1,0);
    intl cnt=0;
    rep(i,1,n+1){
        if(!vis[i]){
            cnt++;
            DFS(i,vis);
        } 
    }
    cout<<cnt<<"\n";
   
}
    
int main()
{
    solve();
}