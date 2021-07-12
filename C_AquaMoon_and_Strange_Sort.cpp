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
    vi v(n);
    vi eve;
    vi odd;
    rep(i,0,n){
        cin>>v[i];
        if(i%2==0) eve.push_back(v[i]);
        else odd.push_back(v[i]);
    }
    sort(v.begin(),v.end());
    sort(eve.begin(),eve.end());
    sort(odd.begin(),odd.end());
    intl e=0,o=0;
    rep(i,0,n){
        intl tt;
        if(i%2==0) tt=eve[e++];
        else tt=odd[o++];
        if(v[i]!=tt){
            cout<<"NO\n";
            return;
        } 
    }
    cout<<"YES\n";
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
