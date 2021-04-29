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
intl t, r,c;

void solve(){
    cin>>r>>c;intl arr[r][c];
    intl ans=0;
    rep(i,0,r){
        rep(j,0,c){
            cin>>arr[i][j];  
        }
    }
    rep(i,0,(r+1)/2){
        rep(j,0,(c+1)/2){
            set<pair<intl,intl>>s;
            s.emplace(i,j);
            s.emplace(r-i-1,j);
            s.emplace(r-i-1,c-j-1);
            s.emplace(i,c-j-1);
            vi v;
        for(auto xx:s){
           //cout<<xx.F+1<<" "<<xx.S+1<<"\n";
            v.emplace_back(arr[xx.F][xx.S]);
        }
        cout<<"\n";
        if(v.size()!=1){
            sort(v.begin(),v.end());
            for(auto z:v) ans+=abs(z-v[1]);
        }
        }

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


