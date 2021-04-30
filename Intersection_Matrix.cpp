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

const intl M=1e9+7;
intl t, r,c,b;

void solve(){
    cin>>r>>c>>b;intl arr[r][c];
    rep(i,0,r){
        rep(j,0,c){
            cin>>arr[i][j];
        }
    }
    intl ans=0;
    rep(i,0,r){
        rep(j,0,r){
            rep(k,0,c){
                rep(l,0,c){
                   
                       if(arr[i][l]+arr[i][k]+arr[j][l]+arr[j][k] ==b){
                           ans=(ans+1)%M;
                       }
                }
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
