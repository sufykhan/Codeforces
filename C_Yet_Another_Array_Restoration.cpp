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
intl t, n,x,y;

void solve(){
    cin>>n>>x>>y;vi d;
    rep(i,1,n+1){
        if((y-x)%i==0){
           
            d.pb((y-x)/i);
        }
    }
    intl mini=INT_MAX,a1=INT_MAX,d1=INT_MAX;
    for(auto &dd:d){
    rep(i,0,n){
        intl a=x-i*dd;
        if(a>0 && (a+(n-1)*dd)>=y && (y-a)%dd==0){
            //cout<<"a--->"<<a<<"\n";
            //cout<<"d--->"<<dd<<"\n";
             if(a1+(n-1)*d1>=a+(n-1)*dd){
                 a1=a;d1=dd;
                 mini=a+dd;
             }
        }
    }
    }
    //cout<<a1<<" "<<d1<<"\n";
    rep(i,0,n){
        cout<<a1+i*d1<<" ";
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
