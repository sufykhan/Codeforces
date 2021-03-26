#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;
intl t,n,m,x,col1,row1,ans;
int main(){
  cin>>t;
  rep(i,0,t){
      cin>>n>>m>>x;
      x%n==0?col1=n:col1=x%n;
      x%n==0?row1=x/n:row1=x/n+1;
      ans=(col1-1)*1LL*m+row1;
      cout<<ans<<"\n";
  }
}