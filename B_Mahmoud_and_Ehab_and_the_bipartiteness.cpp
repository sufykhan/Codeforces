#include <bits/stdc++.h>
using namespace std;

typedef long long intl;
#define rep(i, a, n) for (int i = a; i < n; i++)

intl n;

void BFS(intl start, intl &l, intl &r, vector<intl> adj[])
{
    vector<bool> visited(n+1, 0);
   
    queue<pair<intl, intl>> q;
    q.push({start, 0});
    visited[start] = true;
    l++;
    while (!q.empty())
    {
        intl x = q.front().first;
        intl color = q.front().second;
        q.pop();
        rep(i, 0, adj[x].size())
        {
            intl tr=adj[x][i];
            if (!visited[tr])
            {
                q.push({tr, color ^ 1});
                if (color ^ 1 == 1)
                    r++;
                else
                    l++;
                visited[tr] = true;
            }
        }
    }
}
vector<intl> adj[100005];
long long cnt[2];

void DFS(intl start,intl pnode,intl color){
     
    cnt[color]++;
    rep(i,0,adj[start].size()){
        if(adj[start][i]!=pnode){
            DFS(adj[start][i],start,color^1);
        }
    }
}
void solve()
{
    cin >> n;
    //vector<intl> adj[n+1];
    rep(i, 1, n)
    {
        intl v, u;
        cin >> v >> u;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
   // intl l = 0, r = 0;
   // BFS(1, l, r, adj);
   //cout << l*r-(n-1) << "\n";
   DFS(1,0,0);
   cout<<cnt[0]*cnt[1]-(n-1) << "\n";
}
    
int main()
{
    solve();
}