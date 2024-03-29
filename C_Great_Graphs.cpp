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
    vi v(n+1);
    intl sum=0;
    rep(i,1,n+1){
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin()+1,v.end());
    intl ans=0,pref=0;
    rep(i,1,n+1){
        ans-=v[i]*(i-1)-pref;
        pref=pref+v[i];
    }
    ans+=v[n];
    // vi pref(n);
    // rep(i,2,n){
    //     if(i==2) pref[i]=v[i-2];
    //     else   pref[i]+=pref[i-1]+v[i-2];
    // }
    // rep(i,2,n){
    //     ans+=pref[i]-v[i]*(i-1);
    // }
    cout<<ans<<'\n';
    
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
