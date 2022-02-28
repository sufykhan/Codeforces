#pragma GCC optimize("O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimization("unroll-loops")

#include "bits/stdc++.h"
using namespace std;

typedef long long intl;
typedef vector<intl> vi;

#define pb push_back
#define F first
#define S second
#define rep(i, a, b) for (intl i = a; i < b; i++)
#define all(a) a.begin(), a.end()

const intl N = 2e5 + 5, LG = 19, MOD = 998244353;
intl n, t;

int MinCost_Station(int n,vector<vector<int>>cost){
    int minCost[n];
    minCost[0]=0;
    minCost[1]=cost[0][1];
    for(int i=2;i<n;i++){
        minCost[i]=cost[0][i];
        for(int j=1;j<i;j++){
            minCost[i]=min(minCost[i],minCost[j]+cost[i][j]);
        }
    }
    return minCost[n-1];
}
void solve()
{
    cin >> n;
    vector<vector<int>>cost(n,vector<int>(n));
    rep(i, 0, n)
    {
       rep(j,0,n){
           cin >> cost[i][j];
       }
    }
    cout<<MinCost_Station(n,cost)<<"\n";
}
int main()
{
#ifdef ONLINE_JUDGE
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#endif // ONLINE_JUDGE

    cin >> t;

    while (t--)
    {

        solve();
    }
    return 0;
}