https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1#

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	    int LCS(string s){
	        int n=s.size();
	        int dp[n+1][n+1];
	        for(int i=0;i<=n;i++){
	            dp[0][i]=0;
	            dp[i][0]=0;
	        }
	        int maxi=INT_MIN;
	        for(int i=1;i<=n;i++){
	            for(int j=1;j<=n;j++){
	                if(s[i-1]==s[j-1] && i!=j){
	                    dp[i][j]=dp[i-1][j-1]+1;
	                }
	                else{
	                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
	                }
	                maxi=max(maxi,dp[i][j]);
	            }
	        }
	        return maxi;
	        
	    }
		int LongestRepeatingSubsequence(string str){
		    // Code here
		   return LCS(str);
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
} 