//Subset Sum
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
intl cnt=0;
intl rec(vector<intl>v,intl k,intl i,intl sum){
      if(i==v.size()){
           if(sum==k){
               cnt++;
           }
      }
      cnt=rec(v,k,i+1,sum+v[i]);
      cnt=rec(v,k,i+1,sum);
     return cnt;
}

void solve(){
    intl k;
    cin>>n>>k;vi v(n);rep(i,0,n) cin>>v[i];
    cout<<rec(v,k,1LL*0,k);
}
int main()
{
    FASTIO();
    cin >> t;
    
        solve();
    
}
