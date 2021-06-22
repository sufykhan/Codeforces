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
    vi v(n);
    vector<pair<intl,intl>>pp;
    rep(i,0,n){
        cin>>v[i];
        pp.pb({v[i],i});
    }
    intl x=0,y=0,cnt=0;
    
    sort(pp.begin(),pp.end());
    intl f=1;
    for(auto xw:pp){
        v[xw.second]=f;
        f++;
    }
    rep(i,0,n-1){
     if(v[i+1]-v[i]<-1){
         cout<<"no\n";
         return;
     }
     if(v[i+1]-v[i]>1){
         if(x==0) x=i;
         else y=i;
     }
     if(v[i+1]-v[i]==1){
         cnt++;
     }
    }
     cout<<"yes\n";
    if(cnt==n-1){
         cout<<"1 1\n";
         return;
    }
    if(x==y && x==0){
        cout<<1<<" "<<n<<"\n";
        return;
    }
    if(y==0 && x>0){
        cout<<y+1<<" "<<x+1<<"\n";
        return;
    }

    cout<<x+1<<" "<<y+1<<"\n";
}
int main()
{
    FASTIO();
    solve();
}
