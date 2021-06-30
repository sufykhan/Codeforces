#include <bits/stdc++.h>
using namespace std;

typedef long long intl;
#define rep(i, a, n) for (int i = a; i < n; i++)

intl n;
vector<pair<intl,intl>> adj[100005];
long long cnt[2];
intl ans[111];
void DFS(intl v,intl pp){
    for(auto e:adj[v]){
        intl u=e.first;
        if(u!=pp){
        DFS(u,v);
            ans[v]=max(ans[v],ans[u]+e.second);
        }
    }
}
void solve()
{
    cin >> n;
    rep(i, 1, n)
    {
        intl v,u,c;
        cin >>v>>u>>c;
        adj[v].push_back({u,c});
        adj[u].push_back({v,c});
    }
   DFS(0,-1);
   cout<<ans[0]<<"\n";
}
    
int main()
{
    solve();
}