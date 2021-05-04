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
intl n,W;
void solve(){
    cin>>n>>W;
    intl dp[n+1][W+1];
    memset(dp,-1,sizeof(dp));
    rep(i,0,n+1){
        rep(j,0,W+1){
        if(i==0 || j==0){
            dp[i][j]=0;
        }
        }
    }
    vi w(n);vi val(n);
    rep(i,0,n){
        cin>>w[i];
    }
    rep(i,0,n){
        cin>>val[i];
    }
    rep(i,1,n+1){
        rep(j,1,W+1){
            if(w[i-1]<=j){
                 dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-w[i-1]]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][W]<<"\n";
    
}
int main()
{
    FASTIO();
   
        solve();
}
