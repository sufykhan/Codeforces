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
intl t, n,m,x;

void solve(){
    cin>>n>>m>>x;
    vector<pair<intl,intl>>v1(n);
    vi v(n);rep(i,0,n) {cin>>v[i];v1.pb({v[i],i});}
    vi v2(n);
    sort(v1.begin(),v1.end());
    intl x=1;
    for(auto xx:v1){
        intl tx=x%m;
        if(tx==0) tx=m;
        v2[xx.S]=tx;
        x++;
    }
    if(n==1 && v[0]>x){
        cout<<"NO\n";
        return;
    } 
    if(n==1 && v[0]<=x){
        cout<<"YES\n";
        cout<<v[0]<<"\n";
        return;
    } 
    rep(i,1,v2.size()){
        if(abs(v2[i]-v2[i-1])>x){
            cout<<"NO\n";
        return;
        }
    }
    cout<<"YES\n";
    for(auto xx:v2){
    
        cout<<xx<<" ";
    }
    cout<<"\n";

    
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
