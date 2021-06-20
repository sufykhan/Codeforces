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
intl ti, n,x,t;

void solve(){
    cin>>n>>x>>t;
    intl cnt=0;
    // rep(i,0,n){
    //     if(t>=x){
    //         cnt++;
    //         x+=x;
    //     }
    //     else{
    //         break;
    //     }
    // }
    // intl ans=0;

    intl maxPair=min(n-1,t/x);
    if(maxPair==0){
        cout<<0<<endl;
        return;
    }
   
    cout<<max(0LL,maxPair*1LL*(maxPair-1)/2)+maxPair*(n-maxPair)<<endl;

    // rep(i,1,n){
    //     if(cnt+i>n){
    //         ans+=n-i;
    //     }
    //     else{
    //         ans+=cnt;
    //     }
    // }
    // ans=cnt*(n-cnt)+((n-cnt-1)*(n-cnt))/2;
    // cout<<ans<<"\n";
    
}
int main()
{
    FASTIO();
    cin >> ti;
    rep(ii, 0, ti)
    {
        solve();
    }
}
