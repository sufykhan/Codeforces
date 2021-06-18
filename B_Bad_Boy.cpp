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
intl t,n,m,i,j;

void solve(){
    cin>>n>>m>>i>>j;
    vector<pair<intl,intl>>pd{{n,m},{1,m},{n,1},{1,1}};
    pair<intl,intl>maxi={n,m};
    intl gt=abs(n-i)+abs(j-m);
    for(auto x:pd){
        if(gt<=(abs(i-x.first)+abs(j-x.second))){
            maxi={x.first,x.second};
        }
    }
    
    intl x11=maxi.first,x22=maxi.second;
    cout<<x11<<" "<<x22<<" ";
    if(x11==n && x22==1){
        cout<<1<<" "<<m<<"\n";
    }
    else if(x11==n && x22==m){
        cout<<1<<" "<<1<<"\n";
    }
    else if(x11==1 && x22==m){
        cout<<n<<" "<<1<<"\n";
    }
    else{
        cout<<n<<" "<<m<<"\n";
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
