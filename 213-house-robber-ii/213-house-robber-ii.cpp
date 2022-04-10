class Solution {
public:
    

    int rob1(vector<int>& arr,int type=0) {
        
        int n=arr.size();
        vector<int>parent(n+1,-1);
        vector<int>dp(n+1,0);
        dp[1]=arr[0];
    
        for(int i=2;i<=n;i++){
            dp[i]=max(dp[i-1],arr[i-1]+dp[i-2]);
            if(dp[i]==arr[i-1]+dp[i-2]){
                parent[i]=i-2;
            }
            else{
                parent[i]=i-1;
            }
        }
        if(type==0){
            int x=n;
            int ans=INT_MIN;
            while(parent[x]!=-1){
                x=parent[x];
            }

            if(x==1 && n!=1){
                ans=max(dp[n-1],dp[n]-arr[0]);

                return ans;
            }
        }
        return dp[n];
    
    }
    
    int rob(vector<int>& arr) {
        
       if(arr.size()==1){
           return arr[0];
       }
       int ans=rob1(arr);
       arr.erase(arr.begin());
       int ans2=rob1(arr,1);
        
       return max(ans,ans2);
    
    }
};