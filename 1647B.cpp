#include <bits/stdc++.h>
using namespace std;


void solve(){

    int n,m;cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        string s;cin>>s;
        for(int j=0;j<m;j++){
            if(s[j]=='1') {
                v[i][j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i+1<n && j+1<m && v[i][j]+v[i+1][j]+v[i][j+1]+v[i+1][j+1]==3){
                cout<<"NO\n";
                return;
            }
        }
    }

    cout<<"YES\n";        
    

}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}