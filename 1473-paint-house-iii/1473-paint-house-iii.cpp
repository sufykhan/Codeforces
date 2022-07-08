class Solution {
public:
    
    long long int dp[102][22][102];
    
    vector<int>nums;vector<vector<int>>cost;int m;int n;
    
    long long int values[102][102][22];
    
    long long int findSum(int l,int r,int k){
        int ans=0;
        bool flag=true;
        for(int i=l;i<=r;i++){
                if(nums[i]==0){
                    ans+=cost[i][k];
                }
                else if(nums[i]!=k+1){
                    flag=false;
                }
        }
        if(!flag) return -1;
        return ans;
    }
    
    long long recur(int target,int start,int colorPrev,int size1){
        
        if(target==0){
        
            if(start==m){
                return 0;
            }
            return INT_MAX;
        }
        if(dp[start][colorPrev][target]!=-1) return dp[start][colorPrev][target];
        
        long long fin=INT_MAX;
        
        for(int size=1;size<=m;size++){
            
            if(size+start<=m){
                for(int color=1;color<=n;color++){
                    if(color!=colorPrev){
                        // pair<bool,long long> x=findSum(start,start+size-1,color-1);
                        long long int x=values[start][start+size-1][color-1];
                        if(x!=-1) fin=min(fin,x+recur(target-1,start+size,color,size));
                    }
                }
            }
        }
        
        return dp[start][colorPrev][target]=fin;
         
    }
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        
        this->nums=houses;
        this->cost=cost;
        this->m=m;
        this->n=n;
        
        memset(dp,-1,sizeof(dp));
        
        for(int l=0;l<m;l++){
            for(int r=0;r<m;r++){
                for(int k=0;k<n;k++){
                    values[l][r][k]=findSum(l,r,k);
                }
            }
        }
        long long ans=recur(target,0,0,0);
        if(ans>=INT_MAX) return -1;
        return ans;
    
    }
};