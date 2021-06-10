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
    vi v(n);intl maxi,mini;
    rep(i,0,n){
        cin>>v[i];
    } 
    maxi=max_element(v.begin(),v.end())-v.begin()+1;
    mini=min_element(v.begin(),v.end())-v.begin()+1;
    intl om=max(maxi,mini);
    intl omk=min(maxi,mini);
    intl ans =min(om,n-omk+1);
    ans=min(ans,n-om+omk+1);
    //cout<<om<<" "<<n-omk+1<<" "<<n-om+omk+1<<"\n";
    //maxi=min(maxi,n-maxi);
    //mini=min(mini,n-mini);
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
