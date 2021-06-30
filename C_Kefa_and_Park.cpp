#include <bits/stdc++.h>
using namespace std;

typedef long long intl;
#define rep(i, a, n) for (int i = a; i < n; i++)

intl n,over;
vector<intl>adj[100005];
intl cnt=0;
void DFS(intl v,intl pp,vector<intl>&vec,intl last){
    
    if(vec[v]+last>over && vec[v]==1){
        return;
    }
    if(vec[v]==0){
        last=0;
    }
    bool flag=true;
    for(auto u:adj[v]){
        if(u!=pp){
            flag=false;
            DFS(u,v,vec,last+vec[v]);
        }
    }
    if(flag){
        cnt++;
    }
}
void solve()
{
    cin >> n>>over;
    vector<intl>v(n+1);
    rep(i,1,n+1){
      cin>>v[i];
    }
    rep(i, 1, n)
    {
        intl v,u;
        cin >>v>>u;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
   DFS(1,-1,v,0);
   cout<<cnt<<"\n";
}
    
int main()
{
    solve();
}