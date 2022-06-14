class Solution {
public:
    int recur(string s1,string s2,int i,int j,vector<vector<int>>&dp){
        if(i>=s1.size() || j>=s2.size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s1[i]==s2[j]){
            return dp[i][j]=1+recur(s1,s2,i+1,j+1,dp);
        }
        else{
            return dp[i][j]= max(recur(s1,s2,i+1,j,dp),recur(s1,s2,i,j+1,dp));
        }
        
        
    }
    int minDistance(string s1, string s2) {
            vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,-1));
            int ans=recur(s1,s2,0,0,dp);
            ans=s1.length()+s2.length()-2*ans;
            return ans;
    }
};