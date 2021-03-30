#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;
intl t,n,k,x,h,lef;
int main(){
  cin>>t;
  rep(ii,0,t){
   cin>>n>>k;
   multiset<intl>m;
   rep(i,0,n){
       cin>>x;
       m.insert(x);
   }
   h=1;lef=k;
   while(!m.empty()){
       auto itr=m.upper_bound(lef);
       if(itr==m.begin()){
           lef=k;
           h++;
       }
       else{
           itr--;
           lef=lef-*itr;
           m.erase(itr);
       }
   }
   cout<<h<<"\n";
  }
}