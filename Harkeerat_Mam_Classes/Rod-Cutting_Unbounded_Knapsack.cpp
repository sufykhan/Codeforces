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
//SUFYAN KHAN 2019UMT0149
void solve()
{
    cin >> n;
    vi val(n);
    rep(i, 0, n)
    {
        cin >> val[i];
    }
    intl dp[n+1][n+1];

    //i-->rod size
    //j-->cuts used (1->j)

    for(int i=0;i<=n;i++){
        dp[i][0]=0;
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j-i>=0) dp[i][j]=max(dp[i-1][j],dp[i][j-i]+val[i-1]);
            else dp[i][j]=dp[i-1][j];
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
#ifdef ONLINE_JUDGE
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#endif // ONLINE_JUDGE

    //cin >> t;
    int t=1;

    while (t--)
    {

        solve();
    }
    return 0;
}