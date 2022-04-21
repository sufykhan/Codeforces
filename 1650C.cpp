#include <bits/stdc++.h>
using namespace std;


void solve(){

    int n,m;cin>>n>>m;
    vector<vector<int>>v(m,vector<int>(3,0));
    for(int i=0;i<m;i++){
        cin>>v[i][0]>>v[i][1];
        v[i][2]=i+1;
    }
    sort(v.begin(),v.end(),[](vector<int>a,vector<int>b){
        return a[1]<b[1];
    });
    int ans=0;
    for(int i=0;i<m;i++){
        if(i<2*n){
            ans+=v[i][1];
        }
        else{
            v.pop_back();
        }
    }
    sort(v.begin(),v.end(),[](vector<int>a,vector<int>b){
        return a[0]>b[0];
    });
    cout<<ans<<"\n";
    for(int i=0;i<n;i++){
        cout<<v[i][2]<<" "<<v[2*n-i-1][2]<<"\n";
    }

}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}