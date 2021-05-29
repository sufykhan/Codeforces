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
    n=2*n;vi v(n);
    rep(i,0,n){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    intl x=n/2;
    rep(i,0,x){
            cout<<v[x+i]<<" "<<v[i]<<" ";
    }
      cout<<"\n";
    // rep(i,1,n){
    //   if(2*v[i]==(v[i-1]+v[i+1])){
    //       intl a =v[i];
    //       v[i]=v[i-1];
    //       v[i-1]=a;
    //   }
    // }
    //print(v);
    
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
