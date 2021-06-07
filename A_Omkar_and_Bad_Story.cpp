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
    vi arr(n);
    intl flag=false;
    rep(i,0,n){
        cin>>arr[i];
        if(arr[i]<0){
            flag=true;
        }
    }
    if(n==1){
        cout<<"YES\n";
        cout<<"1\n";
        cout<<arr[0]<<"\n";
        return;
    }
    if(flag){
        cout<<"NO\n";
        return;
    }
    // intl ans=arr[0];
    // intl maxi=*max_element(arr.begin(),arr.end());
    // intl mini=*min_element(arr.begin(),arr.end());
    // vi v;
    // rep(i,1,n){
    //     ans=__gcd(ans,arr[i]);
    // }
    cout<<"YES\n";
    cout<<"101\n";
    rep(i,0,101){
       cout<<i<<" ";
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
