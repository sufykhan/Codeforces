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
intl t, n,k;

void solve(){
    cin>>n>>k;
    vector<intl>a(n,2e9);
    vector<intl>b(k);
    vector<intl>c(k);
    rep(i,0,k) cin>>b[i];
    rep(i,0,k) {cin>>c[i];a[b[i]-1]=c[i];}
    
    vi ans(n,2e9);
    intl r=2e9;
    rep(i,0,n){
        r=min(a[i],r);
        ans[i]=min(ans[i],r);
        r++;
    }
    r=2e9;
    for(intl i=n-1;i>=0;i--){
        r=min(a[i],r);
        ans[i]=min(ans[i],r);
        r++;
    }
    print(ans);
    
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
