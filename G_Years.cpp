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
#define repr(i, a, n) for (intl i = a; i >=n; i--)
#define sort(v) sort(v.begin(),v.end())


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
    cin>>n;vector<pair<intl,intl>>v;
    rep(i,0,n){
      intl x,y;cin>>x>>y;
      v.pb(mp(x,-1));
      v.pb(mp(y-1,1));
    }
    sort(v);intl mx=INT_MIN,val=-1;intl count=0;
    for(auto&xx:v){
        count-=xx.S;
        if(count>mx){
            mx=count;
            val=xx.F;
        }
    }
    cout<<val<<" "<<mx<<"\n";
}
int main()
{
    FASTIO();
    
        solve();
}
