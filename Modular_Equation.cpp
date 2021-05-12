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
intl t, n,m;

void solve(){
    cin>>n>>m;intl ans=0;
    rep(a,1,n){
        rep(b,a+1,n+1){
            if((m%a)%b == (m%b)%a){
                ans++;
               // cout<<a<<" "<<b<<"\n";
            } 
        }
    }
    cout<<ans<<"\n";
}
void solve1(){
    cin>>n>>m;intl ans=0;
    vi v(n+1);
    rep(i,0,n+1){
       v[i]=1;
    }
    rep(i,2,n+1){
        intl a=m%i;
        ans+=v[a]; 
        for(intl b=a;b<=n;b+=i){
                v[b]++;
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
        solve1();
    }
}


