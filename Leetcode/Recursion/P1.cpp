#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int ans=0;
    int cal(int n,vector<int>&dp){
        if(n==0){
            return 1;
        }
        if(n<0){
            return -1;
        }
        if(dp[n]!=0){
            return dp[n];
        }
        
        if(n>=1) dp[n-1]=cal(n-1,dp);
        if(n>=2) dp[n-2]=cal(n-2,dp);
        return -1;
    }
    int climbStairs(int n) {
        
        vector<int>dp(n,-1);
        
        int x=cal(n,dp);
        
        for(int i=0;i<n;i++){
            if(dp[i]==1) ans++;
            cout<<dp[i]<<" ";
        }
        return ans;
    }
};

int main(void){
    Solution s;
    int x=s.climbStairs(6);
    cout<<x<<"\n";
    return 0;
}
