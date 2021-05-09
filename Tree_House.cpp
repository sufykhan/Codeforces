#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;

const intl mod=1e9+7;
void DFS(intl node,map<intl,list<intl>>adj,intl *value,intl n,intl X,int *count1){
    //value[node]=X;
    intl quan=adj[node].size();
    list<intl>::iterator i;
    vector<pair<intl,intl>>v;
    for(auto i=adj[node].begin();i!=adj[node].end();i++){
        v.push_back({count1[*i],*i});
    }
    sort(v.begin(),v.end());
    intl cnt=0;
    for(auto xx:v){
        if(value[xx.second]==0){
            value[xx.second]=(v.size()-cnt)*value[node];
            cnt++;
        }
    }
    
    list<intl>::iterator j;
    for(auto j=adj[node].begin();j!=adj[node].end();j++){
         DFS(*j,adj,value,n,X,count1);
    }
   
}

void nodes_in_subtree(int s, int e,int *count1,map<intl,list<intl>>adj){
     list<intl>::iterator u;
    count1[s] = 1;
    for (u = adj[s].begin(); u != adj[s].end(); u++) {
          
        // condition to omit reverse path
        // path from children to parent
        if (*u == e)
            continue;
          
        // recursive call for DFS
        nodes_in_subtree(*u,s,count1,adj);
          
        // update count[] value of parent using 
        // its children
        count1[s] += count1[*u];
    }
}
void solve(){
    intl n,X;cin>>n>>X;
    map<intl,list<intl>>adj;
    intl value[n+1]={0};
    int count1[n+1];
    rep(i,0,n-1){
        intl x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
    nodes_in_subtree(1,0,count1,adj);
    // rep(i,1,n+1){
    //     cout<<count1[i]<<" ";
    // }
    // cout<<"\n";
    value[1]=1;
    DFS(1,adj,value,n,X,count1);
    intl sumo=0;
    rep(i,1,n+1){
        // cout<<value[i]<<" ";
        sumo=(sumo%mod+value[i]%mod)%mod;
    }
    sumo=(sumo*X)%mod;
    cout<<sumo<<"\n";
    // rep(i,1,n+1){
    //     cout<<i<<"---> ";
    //     for(auto x:adj[i]){
    //         cout<<x<<"-->";
    //     }
    //     cout<<"\n";
    // }
    // cout<<"\n";
}

int main(){
   
   int t;cin>>t;
   for(int i=0;i<t;i++){
       solve();
   }
 
}