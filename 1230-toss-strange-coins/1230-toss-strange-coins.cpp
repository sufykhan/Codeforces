class Solution {
public:

    double recur(int idx,vector<double>&prob,int target,vector<vector<double>>&dp){
       
        if(idx>=prob.size()){
            if(target==0) return 1.0;
            return 0.0;
        }
        
        if(dp[idx][target]!=-1.0) return dp[idx][target];
       
        double not_including=(1-prob[idx])*recur(idx+1,prob,target,dp);
        double including=0;
        if(target>0) including=prob[idx]*recur(idx+1,prob,target-1,dp);
        
        return dp[idx][target]=including+not_including;
    }
    double probabilityOfHeads(vector<double>& prob, int target) {
        vector<vector<double>>dp(prob.size()+1,vector<double>(prob.size()+1,-1.0));
        return recur(0,prob,target,dp);
    }
};