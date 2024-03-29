class Solution {
public:
    long long count[10002];
    long long recur(vector<int>&coins,int amount, int idx=0){
        if(count[amount]!=-1){
            return count[amount];
        }
        if(amount==0){
            return 0;
        }
        count[amount]=INT_MAX;
        for(int i=0;i<coins.size();i++){
            if(amount>=coins[i]) count[amount]=min(count[amount],1+recur(coins,amount-coins[i],i));
            else break;
        }
        return count[amount];
        
    }
    int coinChange(vector<int>& coins, int amount) {
        
        memset(count,-1,sizeof(count));
        sort(coins.begin(),coins.end());
        int ans=recur(coins,amount);
        if(ans==INT_MAX) return -1;
       
        return ans;
        
    }
};