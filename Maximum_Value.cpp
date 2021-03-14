#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;

void solve(vector<intl>arr,intl n){
 sort(arr.begin(),arr.end());
 intl ans1=1LL*arr[0]*arr[1]+ max(arr[0],arr[1])-min(arr[0],arr[1]);
 intl ans2=1LL*arr[n-1]*arr[n-2]+max(arr[n-1],arr[n-2])-min(arr[n-1],arr[n-2]);  
 cout<<max(ans1,ans2)<<"\n";
}

int main(){
   intl t;cin>>t;
   rep(ii,0,t){
      intl n;cin>>n;vector<intl>arr(n);
      rep(i,0,n){
          cin>>arr[i];
      }
      solve(arr,n);
   }
}