#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;
intl t,n,k,ans,fir,las,val;
string s;
int main(){
  cin>>t;
  rep(ii,0,t){
      cin>>n>>k>>s;
      ans=0;
      fir=-1;las=-1;
      rep(i,0,n){
          if(s[i]=='*')
          {
              if(fir==-1) fir=i;
              las=i;
          }
      }
      val=0;
      for(intl i=fir+1;i<=las;i++){
         //cout<<"i-->"<<i<<"\n";
          rep(j,0,k){
              if(j+i<n && s[j+i]=='*'){
                  val=j;
              }
          }
          ans++;
          i=i+val+1;
         // cout<<"i+val+1-->"<<i<<"\n";
      }
      //cout<<"\n";
      cout<<ans+1<<"\n";
  }
}