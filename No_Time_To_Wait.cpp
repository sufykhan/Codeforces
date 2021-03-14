// Best Question
#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;


int main(){
   intl t,h,xx;cin>>t>>h>>xx;
   intl ans=INT_MIN;
   rep(ii,0,t){
      intl x;cin>>x;
      ans=max(ans,x);
   }
   ans+xx>=h ? cout<<"YES\n":cout<<"NO\n";
}