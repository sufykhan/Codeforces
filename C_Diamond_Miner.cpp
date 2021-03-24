#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;
intl t,n,x,y;
int main(){
  cin>>t;
  rep(ii,0,t){
   cin>>n;vector<intl>v1;vector<intl>v2;
   rep(i,0,2*n){
       cin>>x>>y;
      // cout<<x<<"/"<<y<<"\n";
       if(y!=0){
           v1.push_back(abs(y));
       }
       if(x!=0){
           v2.push_back(abs(x));
       }
   }
   sort(v1.begin(),v1.end());
   sort(v2.begin(),v2.end());
   double ans;double asli=0;
   rep(i,0,n){
       //cout<<v1[i]<<" ,"<<v2[i]<<endl;
       ans=(double)sqrt(v1[i]*v1[i]+v2[i]*v2[i]);
       asli+=ans;
       //cout<<ans<<"\n";
   }
   cout<<fixed<<setprecision(15)<<asli<<"\n";
  }
}