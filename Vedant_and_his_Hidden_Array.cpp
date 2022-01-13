#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;cin>>n>>x;
    if(n==1){
        if(x%2==0) cout<<"Even\n";
        else cout<<"Odd\n";
        return;
    }
    if(x%2==1){
        if(n%2==0) cout<<"Even\n";
        else cout<<"Odd\n";
    }
    else{
             cout<<"Impossible\n";
       
    }

}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}