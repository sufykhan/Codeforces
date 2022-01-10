#include <bits/stdc++.h>
using namespace std;

void printV(vector<int>v){
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<"\n";
}
void solve(){
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    printV(v);
}
int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}
