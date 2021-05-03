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
intl dp[100+1][100+1];

intl knapsack(vector<intl>w,vector<intl>val,intl W,intl n){
     if(n==0 || W==0){
         return 0;
     }
     if(dp[W][n]!=-1){
        
         return dp[W][n];
     }
     if(w[n-1]>W){
        return dp[W][n]=knapsack(w,val,W,n-1);
     }
     else
     {
         return dp[W][n]=(max(knapsack(w,val,W,n-1),val[n-1]+knapsack(w,val,W-w[n-1],n-1)));
     }

}
void solve(){
    memset(dp,-1,sizeof(dp));
    cin>>n>>W;
    vi w(n);vi val(n);
    rep(i,0,n){
        cin>>w[i];
    }
    rep(i,0,n){
        cin>>val[i];
    }
    cout<<knapsack(w,val,W,n);
}
int main()
{
    FASTIO();
   
        solve();

}
