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

void solve()
{
    cin >> n;
    vi v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }
    int k; cin>>k;
    sort(all(v));
    cout<<v[k-1]<<endl;
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