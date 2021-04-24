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
intl t, r, c;

void solve()
{
    cin >> r >> c;
    intl dp[r][c];memset(dp,0,sizeof(dp));
    rep(i,0,r){
        string s;cin>>s;
        rep(j,0,c){
            if(s[j]=='*') dp[i][j]=1;
        }
    }
    for(intl i=r-2;i>=0;i--){
        for(intl j=0;j<c-2;j++){
            if(dp[i+1][j]>0&&dp[i+1][j+1]>0&&dp[i+1][j+2]>0&&dp[i][j+1]>0){
                dp[i][j+1]=min(min(dp[i+1][j],dp[i+1][j+1]),dp[i+1][j+2])+1;
            }
        }
    }
    intl ans=0;
     rep(i,0,r){
        rep(j,0,c){
            ans+=dp[i][j];
            //cout<<dp[i][j]<<" ";
        }
        //cout<<"\n";
    }
    cout<<ans<<"\n";
}

int main()
{
    FASTIO();
    cin >> t;
    rep(i, 0, t)
    {
        solve();
    }
}