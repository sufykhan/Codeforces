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
intl t, a,b,k;

int cnt(int n){
    int res=0;
    for(int i=2;i*i<n;i++){
          while(n%i==0){
              n=n/i;
              res++;
          }
          
    }
    if(n>1) res++;
    return res;
}
void solve(){
    cin>>a>>b>>k;
    if((cnt(a)+cnt(b))<k){
      cout<<"NO\n";return;
    }
    if(k>1){
        cout<<"YES\n";
    }
    else{
        if((a%b==0 || b%a==0) && a!=b){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    
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
