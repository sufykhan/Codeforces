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
    cin>>n;
    //vector<pair<intl,intl>>mul;
    map<intl,intl>mp;
    rep(i,0,n){
            intl x;cin>>x;
            mp[x-i]++;
    }intl ans=0;
    for (auto yy : mp)
        ans += yy.S * (yy.S - 1) / 2;
    cout << ans << '\n';
    // sort(mul.begin(),mul.end());
    // intl cnt=0,ans=0;
    // // for(auto x:mul){
    // //     cout<<x.F<<" "<<x.S<<"\n";
    // // }
    // intl comp1=mul[0].F,comp2=mul[0].S;
    // rep(i,0,n-1){
    //     if((mul[i+1].F-comp1)== (mul[i+1].S-comp2)){
    //         cnt++;
    //         ans+=cnt;
    //     }
    //     else{
    //         comp1=mul[i].F;comp2=mul[i].S;
    //     }
    // }
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
