class Solution {
public:
    int maxi=INT_MIN;
    int ans=1;
    int dp[60]={-1};
    void recur(int n,int m){
        
        if(n<0){
            return;
        }
        if(n==0){
            cout<<ans<<" ";
            maxi=max(maxi,ans);
            return;
        }
        for(int i=1;i<=n;i++){
            if(i==m){
                continue;
            }
            ans=ans*i;
            recur(n-i,m);
            ans=ans/i;
        }
    }
    int integerBreak(int n) {
        
        // int x=n;
        // recur(x,x);
        // return maxi;
   
        vector<int>dp(n+4,0);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        dp[3]=2;
        if(dp[n]!=0) return dp[n];
        
        n++;
        
        for(int i=3;i<=n;i++){
            for(int j=1;j<=i;j++){
                dp[i]=max(dp[i],dp[i-j]*j);
            }
        }
        return dp[n];
        
    }
};