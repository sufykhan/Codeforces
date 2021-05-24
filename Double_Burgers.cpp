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
intl t;

void solve(){
    intl x,y;
    cin>>x>>y;
    intl ans=1000000000000000001;
    if(y%x!=0){
        cout<<"-1\n";
        return;
    }
    y=y/x;
    rep(i,1,61){
       intl target=y+i;
       if(target&1LL){
           continue;
       }
       intl count=0,minutes=0;
       rep(j,0,61){
          if(target&(1LL<<j)){
              count++;
              minutes+=j;
          }
       }
       if(count==i){
          ans=min(ans,minutes+count-1);
       }
    }
    if(ans==1000000000000000001){
        cout<<"-1\n";
    }
    else{
    cout<<ans<<"\n";
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