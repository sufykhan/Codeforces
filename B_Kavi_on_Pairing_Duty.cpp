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
 intl dp[1000001];
 intl mod=998244353;
void solve(){
    cin>>n;
     for (int i = 1; i <= n; i++) {
        for (int j = 2*i; j <= n; j += i) {
            dp[j]++;
        }
    }
    dp[0]=1;
    intl total=1;
    rep(i,1,n+1){
        dp[i]=(dp[i]+total)%mod;
        total=(dp[i]+total)%mod;   
    }
    cout<<dp[n]<<"\n";
    
}
int main()
{
    FASTIO();
    solve();
}
