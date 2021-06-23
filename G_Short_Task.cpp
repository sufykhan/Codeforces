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
intl t, c;

const intl MAX = 1e7+5;
   
int divisor[MAX + 1];
 

void sieve()
{
    for (int i = 1; i <= MAX; ++i) {
        for (int j = i; j <= MAX; j += i)
            divisor[j]+=i;
    }
}

void solve(){
    cin>>c;
    if(isPrime(c-1)){
        cout<<c-1<<"\n";
        return;
    }
    intl ans=0;
    for(int i=2;i*i<c;i++){
      if(c%i==0){
          if(i==c/i) ans+=i;
          else ans+=i+c/i;
      }
    }
    
}
int ans[MAX+1];
int main()
{
    FASTIO();
    sieve();
    
    fill(ans,ans+MAX+1,-1);

    for(intl i=MAX+1;i>=1;i--){
       if(divisor[i]<=MAX) ans[divisor[i]]=i; 
    }
    // for(auto x:vp){
    //     cout<<x.first<<" "<<x.second<<"\n";
    // }
    cin >> t;
    rep(ii, 0, t)
    {
        cin>>c;
        if(ans[c]!=-1){
            cout<<ans[c]<<"\n";
        }
        else{
            cout<<"-1\n";
        }
    }
}
