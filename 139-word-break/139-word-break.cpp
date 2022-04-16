class Solution {
public:
    bool wordBreak(string s, vector<string>&dic) {
        
        int n=s.size();
        vector<int>dp(n+1,0);
        dp[0]=1;
        for(int i=1;i<=n;i++){
              for(int j=i-1;j>=0;j--){
                  
                  if(dp[j]){
                         string comp=s.substr(j,i-j);
                         for(auto x:dic){
                             if(x==comp){
                                 dp[i]=1;
                                 break;
                             }
                         }
                    
                  }
               
              }
        }
        return dp[n];
        
    }
};