#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;

void solve(intl a[],intl b[],intl boys,intl girls,intl k,map<intl,intl>&map1,map<intl,intl>&map2){
   intl ans=(k*(k-1))/2;
   for (auto& itr:map1){
       ans-=((itr.second)*(itr.second-1))/2;
   }
   for (auto& itr:map2){
       ans-=((itr.second)*(itr.second-1))/2;
   }
   cout<<ans<<"\n";
}

int main(){
    intl t;cin>>t;
    rep(ii,0,t){
        intl n,m,nn;cin>>n>>m>>nn;
        intl arr[nn],replica[nn];
        map<intl,intl>map1;
        map<intl,intl>map2;
        rep(i,0,nn){
        intl x;cin>>x;
        arr[i]=x;
        if(map1.count(x)>0){
            map1[x]+=1;
        }
        else{
             map1.insert(make_pair(x,1));
        }
        }
        rep(i,0,nn){
            intl x;cin>>x;
        replica[i]=x;
        if(map2.count(x)>0){
            map2[x]+=1;
        }
        else{
             map2.insert(make_pair(x,1));
        }
        }
        solve(arr,replica,n,m,nn,map1,map2);
    }
}