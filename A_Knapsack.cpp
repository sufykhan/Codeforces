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
intl t, n, w;

void solve()
{
    cin >> n >> w;
    vi v(n);
    intl sum = 0, cnt = 0, ans = 0;
    rep(i, 0, n)
    {
        cin >> v[i];
        sum += v[i];
        if (v[i] > w)
        {
            cnt++;
        }
        if(v[i]<=w && v[i]>=(w+1)/2){
            ans=i+1;
        }
    }
    if(ans!=0){
        cout<<"1\n";
        cout<<ans<<"\n";
        return;
    }
    if (sum < (w+1) / 2 || cnt == n)
    {
        cout << "-1\n";
        return;
    }
    if (sum >= (w+1) / 2 && sum <= w)
    {
        rep(i, 0, n)
        {
            cout << i + 1 << " ";
        }
        cout << "\n";
        return;
    }
    ans=0;vi v1;
    rep(i,0,n){
        if(v[i]<(w+1)/2){
          ans+=v[i];
          if(ans>w){
              ans-=v[i];
          }
          else
          {
          v1.pb(i+1);
          }
          if(ans<=w && ans>=(w+1)/2){
             break;
          }
        }
        
    }
    if(ans<=w && ans>=(w+1)/2){
    cout<<v1.size()<<"\n";
    for(auto &xx:v1){
        cout<<xx<<" ";
    }
    cout<<"\n";}
    else{
        cout<<"-1\n";
    
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


//23
//1 7 3 3 8 4 3 3 9 4 3 8  //<=n/2