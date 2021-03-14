#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;

void solve(intl k[],intl c[],intl n,intl m){
   sort(k,k+n,greater<int>());
   intl sum1=0;
   rep(i,1,n+1)
   {
       if(k[i-1]>=i)
       {
           sum1+=c[i-1];
       }
       else{
           sum1+=c[k[i-1]-1];
       }
   }
   cout<<sum1<<"\n";
}

int main(){
    intl t;cin>>t;
    rep(ii,0,t){
        intl n,m;cin>>n>>m;
        intl arr[n],replica[m];
        rep(i,0,n){
        cin>>arr[i];
        }
        rep(i,0,m){
        cin>>replica[i];
        }
        solve(arr,replica,n,m);
    }
}