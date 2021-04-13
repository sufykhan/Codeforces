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

intl mod=1e9+7 ;

void FASTIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
int t, n, m;
intl dp[200005][11];
int main()
{
    FASTIO();
    
    memset(dp,0,sizeof(dp));
    rep(i,0,10){
    dp[0][i]=1;
    }
    for(intl i=1;i<200004;i++){
        for(intl j=0;j<9;j++){
            dp[i][j]=dp[i-1][j+1];
        }
        dp[i][9]=dp[i-1][0]+dp[i-1][1];
    }
    cin >> t;
    rep(ii, 0, t)
    {
        string s;cin>>s>>m;intl ans=0;
        for(char x:s){
            ans=(ans+dp[m][x-'0'])%mod;
        }
        cout<<ans<<"\n";
    }
    
}

// f(x,m)-->f(x-1,m-1)--->if(x==9)-->f(0,m-2)+f(1,m-2)