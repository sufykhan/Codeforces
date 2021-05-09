#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)

void solve(){
    int k;cin>>k;int ans=0;
    for(int i=1;i<=2*k;i++){
        ans+=__gcd(i*i+k,(i+1)*(i+1)+k);
    }
    cout<<ans<<"\n";
}

int main(){
    int t;cin>>t;
    rep(i,0,t){
        solve();
    }
}