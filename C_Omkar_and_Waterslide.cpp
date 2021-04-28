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

void solve(){
    cin>>n;vi v(n);  vi maxi(n);vi mini(n); rep(i,0,n) {cin>>v[i];}
    intl ans=0;
    rep(i,0,n-1){
        ans+=max(0LL,v[i]-v[i+1]);
    }
  cout<<ans<<"\n";
    // intl mx=-1e10,mn=1e10+10;
    // //print(v);
    // rep(i,0,n){
    //     if(v[i]>=mx){
    //         mx=v[i];
    //         mini[i]=0;
    //     }
    //     maxi[i]=mx;
    // }
    // //print(maxi);
    // intl ans=0;
    // rep(i,0,n){
            
    //         if(mn>v[i]){
    //              mn=v[i];
    //         }
    //         if(mini[i]==-1) mini[i]=mn;
    //         else mn=1e9+10;

    //         if(i>0 && mini[i]==0 && mini[i-1]>0){
    //             ans+=maxi[i-1]-mini[i-1];
    //         }
    // }
    // if(mini[n-1]!=0){
    //     ans+=maxi[n-1]-mini[n-1];
    // }
    // //print(mini);
    // cout<<ans<<"\n";
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

// 1 2 3 5 3 2 1 4 5 3 2 7 3 4 6 
// 1 2 3 5 5 5 5 5 5 5 5 7 7 7 7 
// 0 0 0 0 3 2 1 1 0 3 2 0 3 3 3 
