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
intl t, n;

void rec(intl health,vector<intl>v,intl current,intl ans,intl &val){
      if(health<0 || current>v.size()){
          return;
      }
      val=max(val,ans);
      rec(health,v,current+1,ans,val);
      health+=v[current];
      rec(health,v,current+1,ans+1,val);
}


void solve(){
    cin>>n;vi v(n);
    rep(i,0,n){
        cin>>v[i];
    }
    intl dp[n+1][n+1]; //dp[number of potions][number of potions dranked]
    rep(i,0,n+1){
        rep(j,0,n+1){
   dp[i][j]=-1;
        }
    }
    rep(i,0,n+1){
        dp[0][i]=0;
        dp[i][0]=0;
    }
    rep(i,1,n+1){
        rep(j,1,n+1){
                if(dp[i-1][j-1]+v[i]>=0){
                dp[i][j]=max(dp[i-1][j-1]+v[i],dp[i-1][j]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
          
        }
    }
    for(intl i=n;i>=0;i--){
      cout<<dp[n][i]<<" ";
    }
    cout<<"\n";
   
    // intl val=-1;
    // rec(1LL*0,v,1LL*0,1LL*0,val);
    // cout<<val<<"\n";
}
int main()
{
    FASTIO();
        solve();
}