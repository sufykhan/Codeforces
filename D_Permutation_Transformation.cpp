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

int t, n;
int dp[101];
int v[101];

void createTree(int l, int r, int d=0)
{
   if(l>r){
       return;
   }
   intl maxi=0,maxii;
   for(int i=l;i<=r;i++){
       if(v[i]>maxi){
           maxi=v[i];
           maxii=i;
       }
   }
   dp[maxi]=d;
   createTree(maxii+1,r,d+1);
   createTree(l,maxii-1,d+1);
}
int main()
{
    FASTIO();
    cin >> t;
    rep(ii, 0, t)
    {
        cin >> n;

        rep(i, 0, n)
        {
            cin >> v[i];
            dp[i+1] = 0;
        }
        createTree(0,n-1);
        rep(i, 0, n)
        {
            cout << dp[v[i]] << " ";
        }
        cout << "\n";
    }
}