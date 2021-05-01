#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
typedef vector<intl> vi;
typedef pair<intl, intl> pi;

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define rep(i, a, n) for (intl i = a; i < n; i++)

void FASTIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool isPrime(intl n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (intl i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

void print(vector<intl> v)
{
    for (auto x : v)
    {
        cout << x << ' ';
    }
    cout << endl;
}

bool sortbySec(pair<intl, intl> &a, pair<intl, intl> &b)
{
    return (a.second > b.second);
}
intl t, n,k,a,x,y;

void DFSUtil(int u, vector<int> adj[],
                    vector<bool> &visited)
{
    visited[u] = true;
    cout << u << " ";
    for (int i=0; i<adj[u].size(); i++)
        if (visited[adj[u][i]] == false)
            DFSUtil(adj[u][i], adj, visited);
}
 
void DFS(vector<int> adj[], int V)
{
    vector<bool> visited(V+1, false);
    for (int u=1; u<V+1; u++)
        if (visited[u] == false)
            DFSUtil(u, adj, visited);
}
void solve(){
    cin>>n>>k>>a;
    vi f(k);
    vector<int>adj[n+1];
    rep(i,0,k){
       cin>>f[i];
    }
    
    rep(i,0,n-1){
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
 
    rep(i,1,n+1){
        cout<<i<<"--->";
        rep(j,0,adj[i].size()){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    DFS(adj,n);
}
int main()
{
    FASTIO();
    cin >> t;
    rep(ii, 0, t)
    {
        solve();
    }
}
