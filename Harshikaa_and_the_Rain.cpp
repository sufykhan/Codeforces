#include "bits/stdc++.h"
using namespace std;


void addEdge(int v,int u,vector<int>adj[]){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void BFS(vector<int>adj[],vector<int>&level,int n){
   queue<int>q;
   vector<int>visited(n+1,0);
   level[1]=0;
   visited[1]=1;
   q.push(1);
   while(!q.empty()){
        int x=q.front();
        q.pop();

        for(int i=0;i<adj[x].size();i++){
            if(visited[adj[x][i]]==0) 
            {
                q.push(adj[x][i]);
                visited[adj[x][i]]=1;
                level[adj[x][i]]=level[x]+1;
            }
        }
   }

}
void solve(){
    int n,m;cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<n-1;i++){
        int v,u;cin>>v>>u;
        addEdge(v,u,adj);
    }
    int prev=0;
    vector<int>time(m);
    for(int i=0;i<m;i++){
        int x;cin>>x;
        time[i]=x-prev-1;
        prev=x;
    }
    vector<int>level(n+1);
    BFS(adj,level,n);

    level.erase(level.begin());
    
    sort(level.begin(),level.end());

    // for(auto x:level){
    //     cout<<x<<" ";
    // }
    // cout<<"\n";
    // for(auto x:time){
    //     cout<<x<<" ";
    // }
    // cout<<"\n";

    vector<int>pre(n);
    pre[0]=0;
    for(int i=1;i<n;i++){
        pre[i]=level[i]+pre[i-1];
    }
    // for(auto x:pre){
    //     cout<<x<<" ";
    // }
    // cout<<"\n";
    int ans=0;
    for(auto x:time){
       int l=0,r=n,target=0;
       while(r>l){
           int mid=l+(r-l)/2;
           if(level[mid]<=x) {l=mid+1;}
           else r=mid;
       }
       //cout<<r<<" ";
       ans+=x*r-pre[r-1];
    }
    cout<<ans<<"\n";
    
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}



// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define mp make_pair
// #define pii pair<int, int>
// #define f first
// #define s second

// const int MOD = 1000000007;

// vector<int> edges[100005];
// int psa[100005];
// ll psa2[100005];

// void dfs(int v, int p, int d) {
//     if (v > 1 && edges[v].size() == 1) {
//         psa[d]++;
//         psa2[d] += d;
//     }
//     for (int i : edges[v]) {
//         if (i != p) dfs(i, v, d+1);
//     }
// }

// void solve() {
//     int n, m, x, y;
//     scanf("%d%d", &n, &m);
//     for (int i=1; i<=n; i++) {
//         edges[i].clear();
//         psa[i] = psa2[i] = 0;
//     }
//     for (int i=1; i<n; i++) {
//         scanf("%d%d", &x, &y);
//         edges[x].push_back(y);
//         edges[y].push_back(x);
//     }
//     dfs(1, 0, 0);
//     //for (int i=1; i<=n; i++) printf("Test %d %d\n", i, psa[i]);
//     for (int i=2; i<=n; i++) {
//         psa[i] += psa[i-1];
//         psa2[i] += psa2[i-1];
//     }
//     int bef = 0;
//     ll ans = 0;
//     for (int i=1; i<=m; i++) {
//         scanf("%d", &x);
//         ll cur = x-bef;
//         bef = x;
//         ll val = min(cur, 1ll*n);
//         ans += cur*psa[val]-psa2[val];
//     }
//     printf("%lld\n", ans);
// }

// int main() {
//     int tests = 1;
//     scanf("%d", &tests);
//     while (tests--) solve();
// }