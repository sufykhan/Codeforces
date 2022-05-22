class Solution {
public:
    int dp[1001][1001];
    int countSubstrings(string s) {
        memset(dp,0,sizeof(dp));
        int n=s.size();
        
        int ans=s.size(),x,y;
        
        for(int i=0;i<=n;i++){
            dp[i][i]=1;
            dp[0][i]=0;
            dp[i][0]=0;
        }
        
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                dp[i][i+1]=1;
                ans++;
            }
            else{
                dp[i][i+1]=0;
            }
        }
        
        for(int len=3;len<=s.size();len++){
            
            for(int j=1;j<=s.size() && j+len-2<s.size();j++){
                
                 x=j-1,y=j+len-2;
                 if(s[x]==s[y] && dp[j+1][y]==1){
                     dp[j][y+1]=1;
                     ans++;
                 }
                 else {
                     dp[j][y+1]=0;
                 }
            }
            
        }
        return ans;
        
    }
};