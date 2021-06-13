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

intl MOD=1e9+7;
intl t, nn;


void solve(){
    cin>>nn;vi v1(nn);vi v2(nn);
    rep(i,0,nn){
        cin>>v1[i];
    }
    rep(i,0,nn){
        cin>>v2[i];
    }
    map<pair<intl,intl>,int>m;
    rep(i,0,nn){
        m[{min(v1[i],v2[i]),max(v1[i],v2[i])}]++;
    }
    intl total=0,ans=1;
    for(auto xx:m){
       total+=xx.second-1;
    }
    //cout<<total<<"\n";
    rep(i,0,total+1){
            ans=(2*ans)%MOD;
    }

    cout<<ans<<"\n";
    
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
