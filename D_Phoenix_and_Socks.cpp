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
void printm(map<intl,intl> v)
{
    for (auto x : v)
    {
        cout <<"("<<x.F <<" "<<x.S<<"),";
    }
    cout << endl;
}

bool sortbySec(pair<intl, intl> &a, pair<intl, intl> &b)
{
    return (a.second > b.second);
}
intl t, n,l,r,x;

void solve(){
    cin>>n>>l>>r;
    map<intl,intl>ls;map<intl,intl>rs;
    intl ans=0,conv=abs(r-l)/2;
    rep(i,0,l){
        cin>>x;
        ls[x]++;
    }
    rep(i,0,r){
        cin>>x;
        rs[x]++;
    }
    if(l>=r){
        for(auto xx:rs){
            if(ls.find(xx.F)!=ls.end()){
                ans+=xx.S-min(xx.S,ls[xx.F]);
                ls[xx.F]-=min(xx.S,ls[xx.F]);
                xx.S-=min(xx.S,ls[xx.F]);
            }
            else{
                ans+=xx.S;
            }
        }
        intl y=conv;intl comp=0;
        for(auto xx:ls){
            if(xx.S>1) comp+=xx.S/2;
        }
        ans+=max(1LL*0,conv-comp); 
    }
    else{
        for(auto xx:ls){
            if(rs.find(xx.F)!=rs.end()){
                ans+=xx.S-min(xx.S,rs[xx.F]);
                rs[xx.F]-=min(xx.S,rs[xx.F]);
                xx.S-=min(xx.S,rs[xx.F]);
            }
            else{
                ans+=xx.S;
            }
        }
        intl y=conv;intl comp=0;
        for(auto xx:rs){
            if(xx.S>1) comp+=xx.S/2;
        }
        ans+=max(1LL*0,conv-comp); 
    }
   
    
    cout<<ans+conv<<"\n";
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




