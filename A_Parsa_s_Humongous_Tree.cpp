

#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
typedef vector<intl> vi;
typedef pair<intl, intl> pi;


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

intl t, n;

list<intl>arr[100001];
 
intl dp[100001][2];

vector<pair<intl,intl>> v;

void DFS(intl start,intl prev){
     
     for(auto xx:arr[start]){
         if(xx!=prev){
             DFS(xx,start);
             dp[start][0]+=max(abs(v[start-1].first-v[xx-1].first)+dp[xx][0],abs(v[start-1].first-v[xx-1].second)+dp[xx][1]);
             dp[start][1]+=max(abs(v[start-1].second-v[xx-1].first)+dp[xx][0],abs(v[start-1].second-v[xx-1].second)+dp[xx][1]);
             
         }
     }
}
void solve(){
    cin>>n; 
    v.clear();
    rep(i,0,n){
        intl x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    rep(i,1,n){
        intl x,y;
        cin>>x>>y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
   
    DFS(1LL,0LL);
    intl ans=max(dp[1][0],dp[1][1]);
    cout<<ans<<"\n";
    
}
int main()
{
    FASTIO();
    cin >> t;
    rep(ii, 0, t)
    {
    for(intl i=1;i<=n;i++){
    arr[i].clear();
    dp[i][0]=dp[i][1]=0;
    }

        solve();
    }
}
