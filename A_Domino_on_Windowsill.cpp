#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;
intl t,n,k1,k2,w,b,w1,b1;
int main(){
  cin>>t;
  rep(i,0,t){
      cin>>n>>k1>>k2>>w>>b;
      w1=min(k1,k2)+(abs(k1-k2))/2;
      b1=n-max(k1,k2)+(abs(k1-k2))/2;
      if(w1>=w && b1>=b)
        cout<<"YES\n";
      else  
        cout<<"NO\n";  
  }
}