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

intl MOD=1e9+7;
intl t, n;

void DFS(intl start,vector<intl>v[],bool *visited){
       visited[start]=true;
        for(auto x:v[start]){
            if(!visited[x]){
                DFS(x,v,visited);
            }
        }
}

void solve(){
    cin>>n;vi v1(n);vi v2(n);
    rep(i,0,n){
        cin>>v1[i];
    }
    rep(i,0,n){
        cin>>v2[i];
    }
    vector<intl>v[n+1];
    rep(i,0,n){
        v[v2[i]].push_back(v1[i]);
        v[v1[i]].push_back(v2[i]);
    }
    intl components=0;
    bool visited[n+1];
    memset(visited,0,sizeof(visited));
    rep(i,1,n+1){
        if(!visited[i]){
            components++;
            DFS(i,v,visited);
        }
    }
    //cout<<components<<"\n";
    intl ans=1;
    rep(i,0,components){
      ans=(2*ans)%MOD;
    }
    cout<<ans<<"\n";
    // for(intl i=1;i<=n;i++){
    //     cout<<i<<"-->";
    //     for(auto z:v[i]){
    //         cout<<z<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<"\n";

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
