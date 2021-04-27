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
    for (auto a : v)
    {
        cout << a << ' ';
    }
    cout << endl;
}

bool sortbySec(pair<intl, intl> &a, pair<intl, intl> &b)
{
    return (a.second > b.second);
}
intl t, n;

void solve(){
    cin>>n;vi v(n);
    rep(i,0,n){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<intl>());
  // print(v);
    intl maxi=-(1LL<<60);
    for(int j=0;j<6;j++){
        intl ans=1;
        for(int i=0;i<j;i++){
          ans=ans*v[i];
          //cout<<"First->"<<v[i]<<"\n";
        }
        for(int i=0;i<5-j;i++){
            ans=ans*v[n-i-1];
             //cout<<"Second->"<<v[n-i-1]<<"\n";
        }
        maxi=max(maxi,ans);
        //cout<<"<--------->\n";
    }
    cout<<maxi<<"\n";

    
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
