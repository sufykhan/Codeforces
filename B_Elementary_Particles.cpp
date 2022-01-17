#include "bits/stdc++.h"
using namespace std;

int arr[152344];
void solve(){
    int n,ans=-1;cin>>n;
    memset(arr,0,sizeof(arr));
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        if(arr[x]){
            ans=max(ans,arr[x]+n-i);
        }
        arr[x]=i;
    }
    cout<<ans<<"\n";
   
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}