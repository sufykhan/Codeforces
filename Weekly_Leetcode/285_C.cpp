//Link->https://leetcode.com/contest/weekly-contest-285/problems/maximum-points-in-an-archery-competition/

//TYPE:DP

class Solution {
public:
    vector<int> maximumBobPoints(int m, vector<int>& arr) {
        
        
        int n=arr.size();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        for(int i=0;i<=m;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<=n;i++){
             for(int j=1;j<=m;j++){
                 if(j-arr[i-1]-1>=0){
                       dp[i][j]=max(i-1+dp[i-1][j-arr[i-1]-1],dp[i-1][j]);
                 }
                 else{
                     dp[i][j]=dp[i-1][j];
                 }
               
             }
        }

        int i=n,j=m;
	    vector<int> ans(n,0);
	
	    while(j>=0 && i>0){
		    if(dp[i][j] == dp[i-1][j]){
		        ans[i-1] = 0;
		        i--;
		    }
		    else{
                ans[i-1]=arr[i-1]+1;
                j=j-arr[i-1]-1;
                i--;
            }
	    }
        ans[0] =j;

	    return ans;
    }
};