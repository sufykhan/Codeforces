//Starting from any column in row 0 return the largest sum of any of the paths up to row N-1.

#include "bits/stdc++.h"
using namespace std;

class Solution{
public:
    int maximumPath(int n, vector<vector<int>>grid)
    {
        //dp[i][j] --> Maxumum cost to reach (i,j)
        int dp[n+1][n+1];
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
            dp[0][i]=0;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dp[i][j]=grid[i-1][j-1]+max(dp[i-1][j],max(dp[i-1][j-1],dp[i-1][j+1]));
            }
        }
        int maxi=INT_MIN;
        for(int i=1;i<=n;i++){
            maxi=max(maxi,dp[n][i]);
        }
        return maxi;
    }
};
int main(){
    int n;cin>>n;
    vector<vector<int>>grid(n,vector<int>(n));
    for(int i=0;i<n*n;i++){
        cin>>grid[i/n][i%n];
    }
    Solution S;
    cout<<S.maximumPath(n,grid)<<"\n";
}