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
    cin>>n;vi v(n);vi v1(n-1);intl ans=0;
    rep(i,0,n) cin>>v[i];intl mx=max(abs(v[1]-v[0]),abs(v[n-1]-v[n-2]));
    rep(i,1,n){
     ans+=abs(v[i]-v[i-1]);
     v1[i-1]=abs(v[i]-v[i-1]);
    }
    rep(i,0,n-2){
        mx=max(mx,abs(v1[i]+v1[i+1]-abs(v[i]-v[i+2])));
    }
    cout<<ans-mx<<"\n";
    
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
// 1 4 3 2 4 1 
//  3 1 1 2 3 