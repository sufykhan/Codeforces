#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;
int main(){
    intl n,m;cin>>n>>m;
    string sn,sm;cin>>sn>>sm;
    // map<char,int>bound1;
    // map<char,int>bound2;
    // map<char,bool>visited;
    vector<int>lefti(n);
    vector<int>righti(n);
    intl i=0,j=0;
    while(j<m){
        while(sn[i]!=sm[j]){
          i++;
        }
        lefti[j]=i;
        i++;
        j++;
    }
    i=n-1;
    j=m-1;
    while(j>=0){
        while(sn[i]!=sm[j]){
          i--;
        }
        righti[j]=i;
        i--;
        j--;
    }
    // rep(i,0,n){
    //     if(bound2[sn[i]]==0 && !visited[sn[i]]){
    //         bound1[sn[i]]=i;
    //     }
    //   bound2[sn[i]]=i;
    //   visited[sn[i]]=true;
    // }
    int ans=INT_MIN;
    rep(i,1,m){
     ans=max(ans,righti[i]-lefti[i-1]);
    //    intl comp=bound2[sm[i]]-bound1[sm[i-1]];
    //    ans=max(ans,comp);
    }
    cout<<ans<<"\n";
   
}