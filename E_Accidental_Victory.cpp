#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;

void solve(intl arr[],intl replica[],intl n){
   sort(arr,arr+n);
   intl s=arr[0];int visit[n];
   rep(i,0,n-1){
       if(arr[i+1]>s){
           visit[i]=0;
       }
       else{
           visit[i]=1;
       }
       s+=arr[i+1];
   }
   visit[n-1]=1;
   intl endval=-1;
   for(int i=n-1;i>=0;i--){
     if(visit[i]==0){
       endval=i;
       break;
     }
   }
   cout<<n-1-endval<<"\n";
   intl target=arr[endval+1];
   rep(i,0,n){
       if(replica[i]>=target){
           cout<<i+1<<" ";
       }
   }
   cout<<"\n";

}

int main(){
    intl t;cin>>t;
    rep(ii,0,t){
        intl n;cin>>n;
        intl arr[n],replica[n];
        rep(i,0,n){
        cin>>arr[i];
        replica[i]=arr[i];
        }
        solve(arr,replica,n);
    }
}