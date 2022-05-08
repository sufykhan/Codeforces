class Solution {
public:
    
    int COINCHANGE(int sum,int k){
        int mod=1e9+7;
        vector<int>coin={1,2,3};
        if(k==7 || k==9){
            coin.push_back(4);
        }
        int n=coin.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,0));
        
        for(int i=0;i<=sum;i++){
            dp[0][i]=0;
        }
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        
        for(int k=1;k<=sum;k++){
            for(int i=1;i<=n;i++){
                if(k-coin[i-1]>=0){
                    dp[i][k]=(dp[i-1][k]%mod+dp[n][k-coin[i-1]]%mod)%mod;
                }
                else{
                    dp[i][k]=dp[i-1][k]%mod;
                }
            }
        }
        return dp[n][sum];
    }
    int countTexts(string s) {
        
        int cnt=0;
        long long ans=1;
        int mod=1e9+7;
        s+='$';
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                cnt++;
            }
            else{
                int k=s[i-1]-'0';
                ans=((ans%mod)*1LL*(COINCHANGE(cnt+1,k))%mod)%mod;
                ans=ans%mod;
                cnt=0;
            }
        }
        return ans;
        
        
    }
};