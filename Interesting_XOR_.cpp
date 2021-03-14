// Best Question
#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
#define rep(i,a,n) for(intl i=a;i<n;i++)


void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve(intl n){
  vector<intl>v;
  while(n>0){
    v.push_back(n & 1);  
    n=n>>1;
  }
  intl A=0,B=0;
  rep(i,0,v.size()){
      if(i!=v.size()-1 && v[i]==0){
          A+=pow(2,i);
      }
      if(i!=v.size()-1){
          B+=pow(2,i);
      }
  }
  A+=pow(2,v.size()-1);
  intl ans=A*1LL*B;
//   for(auto x:v)
//   {
//       cout<<x<<" ";
//   }
  cout<<ans<<"\n";
}
int main(){
    FASTIO();
   intl t;cin>>t;
   rep(ii,0,t){
     intl n;cin>>n;
   solve(n);}
   
}
