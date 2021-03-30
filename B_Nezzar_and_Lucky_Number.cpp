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

bool sortbySec(pair<intl, intl> &a, pair<intl, intl> &b)
{
    return (a.second > b.second);
}
intl t, q, d, mx,u;
bool dp[1LL*208];
int main()
{
    FASTIO();
    cin >> t;
    rep(ii, 0, t)
    {
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        cin>>q>>d;
        mx=d*10;
        for (intl i=0;10*i+d<=mx;++i){
            for (intl j=0;10*i+d+j<=mx;++j){
                dp[10*i+d+j]|=dp[j];
            }
        }
        while (q--){
            u;
            cin>>u;
            if (u>=mx||dp[u]) cout<<"YES\n";
            else cout<<"NO\n";
        }

    }
}
