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
#define repr(i, a, n) for (intl i = a; i >=n; i--)
#define sort(v) sort(v.begin(),v.end())


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
    cin>>n;vector<pair<intl,intl>>v;
    rep(i,0,n){
      intl x,y;cin>>x>>y;
      v.pb(mp(x,y-1));
    }
    sort(v);intl entry=v[0].F,exit=v[0].S; vector<vector<intl>>mega;
    // rep(i,0,n){
    //     cout<<v[i].F<<" "<<v[i].S<<"\n";
    // }
    // cout<<endl;
    intl ans=0;intl mx=1,startingmx=entry;
    for(int i=1;i<n;i++){
        if(v[i].F<=exit){
            entry=v[i].F;
            exit=v[i].S;
            ans++;
        }else{
            if(mx<ans+1){
                startingmx=entry;mx=ans+1;
            }
        //    mega.pb({entry,exit,ans+1});
           ans=0;
           entry=v[i].F;
           exit=v[i].S;
        }
    }
    if(ans>0){
        if(mx<ans+1){
            startingmx=entry;mx=ans+1;
        }
    }
    // rep(i,0,mega.size()){
    //     rep(j,0,3){
    //         cout<<mega[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<endl;
   cout<<startingmx<<" "<<mx<<"\n";   
}
int main()
{
    FASTIO();
    
        solve();
}
