#include <bits/stdc++.h>

using namespace std;
//Number of possible way to reach the grid end(n,m) starting from 1,1 position


int grid(int n,int m, vector<vector<int>>&v){

    if(n>0 && m>0 && v[n][m]>=0) return v[n][m];
    if(n==1 || m==1) return 1;
    
    return v[n][m]=grid(n-1,m,v)+grid(n,m-1,v);
    
    
}
int main()
{
    int n,m;cin>>n>>m;
    vector<vector<int>>v(n+1,vector<int>(m+1,-1));
    cout<<grid(n,m,v)<<" ";
    
    
    int dp[n+1][m+1];
  
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j==1 || i==1) dp[i][j]=1;
            else dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    cout<<dp[n][m]<<" ";
}

// [[][][]]
// [[][][]]
// [[][][]]