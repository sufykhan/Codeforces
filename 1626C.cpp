#include <bits/stdc++.h>
using namespace std;

long long f(int l,int r,int n){
    long long ans=(l+r)*1LL*n;
    ans=ans/2;
    return ans;
}
void solve(){
    int n;cin>>n;
    vector<int>k(n);
    vector<int>h(n);
    for(int i=0;i<n;i++){
        cin>>k[i];
    }
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    for(int i=n-2;i>=0;i--){
        h[i]=max(h[i],h[i+1]-(k[i+1]-k[i]));
    }
    long long ans=0;
    for(int i=0;i<n;i++){
        int gap=k[i];
        if(i!=0) gap-=k[i-1];
        if(gap>=h[i]) ans+=f(1,h[i],h[i]);
        else ans+=f(h[i-1]+1,h[i-1]+gap,gap),h[i]=h[i-1]+gap;
    }
    cout<<ans<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}