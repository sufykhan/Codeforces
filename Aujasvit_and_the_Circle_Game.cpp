#include <bits/stdc++.h>
using namespace std;


void solve(){
    int m,x;cin>>m>>x;
    vector<int>ans(x+1,0);
    ans[1]=1;
    for(int i=2;i<=x;i++){
        int y=(m-1)%i+1;
        ans[i]=y>ans[i-1]?ans[i-1]:ans[i-1]+1;
    }
    for(auto x:ans){
        if(x!=0) cout<<x<<" ";
    }
    cout<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}

