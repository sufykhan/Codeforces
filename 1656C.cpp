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
    
    int zero=0;
    int one=0;

    int con=0;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==0) zero++;
        if(x==1) one++;
        mp[x]++;
        if(con==0 && (mp[x-1]>0 || mp[x+1]>0)){
            con++;
        }
    }
    if(zero>0 && one>0){
        cout<<"NO"<<endl;
        return;
    }
    if(one>0 && con>0){
       cout<<"NO"<<endl;
        return;
    }
    cout<<"YES\n";
    
    
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
