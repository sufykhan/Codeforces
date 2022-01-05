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
intl t;

void bin(intl n,vector<int>&v)
  {
    intl i;
    int j=0;
    for (i = 1 << 30; i > 0; i = i / 2)
    {
      j++;
      if((n & i) != 0)
      {
        v[j]++;
      }
    }
  }

void solve(){
    intl n;cin>>n;
    vector<int>v(32);
    for(int i=0;i<32;i++) v[i]=0;
    for(int i=0;i<n;i++){
        intl x;cin>>x;
        bin(x,v);
    } 
    intl ans=0;
    for(int i=31;i>=0;i--){
       //cout<<v[i]<<" ";
       if(v[i]>=2) ans+=pow(2,31-i);
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
