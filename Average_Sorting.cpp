#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;

bool isequal(intl arr[],int n){
    intl arr1[n];int cnt=0;
    rep(i,0,n){
        arr1[i]=arr[i];
    }
    rep(i,0,n-1){
      if(arr[i]==arr[i+1])
      {  
          if(i==0){
              cnt++;
          }
          cnt++;
          if(cnt==3){
              return true;
          }
          else if(cnt==2 && arr[i+1] && arr[i]!=arr[i+1]){
              return true;
          }
          
      }
      else{
          cnt=0;
      }
    }
    sort(arr,arr+n,greater<int>());
    rep(i,0,n){
        if(arr[i]!=arr1[i]){
            return false;
        }
    }
    return true;
} 
// y 5 5 5 5 x  
int main(){
   intl t;cin>>t;
   rep(ii,0,t){
      intl n;cin>>n;intl arr[n];
      intl mx=INT_MAX,flag=0;
      rep(i,0,n){
          cin>>arr[i];
          if(i!=0 && arr[i]>mx){
              flag=1;
          }
          mx=min(arr[i],mx);
      }
      if (flag==0){
          cout<<"No\n";
      }
      else{
          cout<<"Yes\n";
      }
   }
}