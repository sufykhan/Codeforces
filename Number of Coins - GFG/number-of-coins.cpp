// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	
	int minCoins(int coins[], int N, int V) 
	{ 
	    vector<long long>dp(V+1,INT_MAX);
	    dp[0]=0;
	    for(int i=0;i<=V;i++){
	        for(int j=0;j<N;j++){
	            if(i-coins[j]>=0){
	                dp[i]=min(dp[i],1+dp[i-coins[j]]);
	            }
	        }
	    }
	    if(dp[V]==INT_MAX) return -1;
	    else return dp[V];
	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends