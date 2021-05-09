#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,n) for(int i=a;i<n;i++)

vector<int>v[2002];
vector<int>visited(2002,false);
int ans=-1;
void DFS(int root,int dept){
     ans=max(dept,ans);
     for(int i=0;i<v[root].size();i++){
         if(visited[v[root][i]]==0){
             visited[v[root][i]]=1;
             DFS(v[root][i],dept+1);
         }
     }
    
}
int main(){
    int n;cin>>n;
    
    rep(i,1,n+1){
        int x;cin>>x;
        if(x==-1) v[i].push_back(0),v[0].push_back(i);
        else v[i].push_back(x),v[x].push_back(i);
    }
    // rep(i,0,n+1){
    //     cout<<i<<"---->";
    //     for(auto xx:v[i]){
    //         cout<<xx<<"->";
    //     }
    //     cout<<"\n";
    // }
    int dept=0;    visited[0]=true;
    DFS(0,dept);
    cout<<ans<<"\n";
}