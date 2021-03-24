#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;

intl t,n,c,ans;
string s;
int main(){
  cin>>t;
  rep(ii,0,t){
      ans=0;
   cin>>n>>c>>s;
   rep(i,0,n/2){
       if(s[i]==s[n-i-1]){
           ans++;
       }
       else{
           break;
       }
   }
   if(n%2==1 || (n%2==0 && ans!=(intl)n/2)) ans++;
   if(ans>=c+1 ){
       cout<<"YES\n";
   }
   else{
       cout<<"NO\n";
   }
  }
}