#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;

void solve(intl n,intl k){
  for(int i=1;i<k-n%k;i++)
  {
      cout<<i<<" ";
  }
  for(int i=k;i>=k-n%k;i--)
  {
      cout<<i<<" ";
  }
  cout<<"\n";
}
int main(){
    intl t;cin>>t;
    rep(ii,0,t){
        intl n,k;cin>>n>>k;
        solve(n,k);
    }
}