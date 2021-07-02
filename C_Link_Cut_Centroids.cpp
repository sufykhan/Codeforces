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


intl t;
intl n,sizeQ[100005],fa[100005],mini=1e9,cent1,cent2,leaf;
vector<int> v[100005];

void dfs(intl start,intl parent){
    //cout<<"start-->"<<start<<"\n";
    fa[start]=parent;
    sizeQ[start]=1;
    intl maxi=0;
    for(auto xx:v[start]){
        if(xx==parent) continue;
        dfs(xx,start);
        sizeQ[start]+=sizeQ[xx];
        maxi=max(maxi,sizeQ[xx]); //<--This is for getting sibling size
       // cout<<"xx-->"<<xx<<" size-->"<<sizeQ[xx]<<"\n";
    }
    //cout<<start<<"<--start-size-->"<<maxi<<" -- "<<n-sizeQ[start]<<"\n";
    maxi=max(maxi,n-sizeQ[start]);
    //cout<<start<<"<--start-size-->"<<maxi<<" -- "<<n-sizeQ[start]<<"\n";
    if(maxi<mini) cent1=start,mini=maxi,cent2=0;
    else if (maxi==mini) cent2=start;
}

void dfs2(intl start,intl parent){
    if(v[start].size()==1){
        leaf=start;
        return;
    }
    for(auto x:v[start]){
        if(x==parent) continue;
        dfs2(x,start);
    }
}
void solve()
{
    cin >> n,cent1=cent2=0,mini=1e9;
    for(int i=1;i<=n;i++) v[i].clear(),fa[i]=0;
    rep(i, 0, n-1)
    {
        intl x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1,0);
    if(cent2==0){
        cout<<1<<" "<<v[1][0]<<"\n";
        cout<<1<<" "<<v[1][0]<<"\n";
        return;
    }
    if(fa[cent1]!=cent2) swap(cent1,cent2);
    dfs2(cent1,cent2);
    cout<<leaf<<" "<<fa[leaf]<<"\n";
    cout<<leaf<<" "<<cent2<<"\n";
    
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
