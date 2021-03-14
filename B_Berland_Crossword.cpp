#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;

void solve(intl n,intl u1,intl r1,intl d1,intl l1){
  intl flag=0;
  rep(i,0,16){
   intl u=u1,r=r1,d=d1,l=l1;   
   if(i&1){
       u--;
       l--;
   }
   if(i&2){
       r--;
       u--;
   }
   if(i&4){
       d--;
       r--;
   }
   if(i&8){
       d--;
       l--;
   }
   intl flag1=1;
   vector<intl>v={u,l,r,d};
   for(auto x:v){
     if(!(x>=0 && x<=n-2)){
         flag1=0;
         break;
     }
   }
   if(flag1==1){
       flag=1;
   }
  }
  cout<<(flag==1?"YES\n":"NO\n");
}

int main(){
   intl t;cin>>t;
   rep(ii,0,t){
      intl n,u,r,d,l;cin>>n>>u>>r>>d>>l;
      solve(n,u,r,d,l);
   }
}