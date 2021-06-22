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
intl N=1e5+6;
vector<intl>v(N);
void solve(){
    v.clear();
    cin>>n;
   // vi v(n);
    intl pref[n+1]={0};
    rep(i,0,n){
        cin>>v[i];
        pref[i+1]=pref[i]+v[i];
    }
    sort(v.begin(),v.begin()+n);
    intl pref2[n+1]={0};
    rep(i,0,n){
        pref2[i+1]=pref2[i]+v[i];
    }
    intl q;cin>>q;
    rep(i,0,q){
        intl typ,x,y;
        cin>>typ>>x>>y;
        if(typ==1){
            cout<<pref[y]-pref[x-1]<<"\n";
        }
        else{
            cout<<pref2[y]-pref2[x-1]<<"\n";
        }
    }
    
    
}
int main()
{
    FASTIO();
   
    solve();
    
}
