class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                dp[i][j]=(matrix[i-1][j-1]=='1')+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
            }
        }
        int maxSize=min(n,m);
        int ans=0;
        for(int k=1;k<=maxSize;k++){
            bool flag=false;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    int row1=i;
                    int row2=min(n,i+k-1);
                    int col1=j;
                    int col2=min(m,j+k-1);
                    int val=dp[row2][col2]+dp[row1-1][col1-1]-dp[row2][col1-1]-dp[row1-1][col2];
                    if(val==k*k){
                        flag=true;
                        break;
                    }
                    
                }
                if(flag){
                    break;
                }
                
            }
            if(flag){
                ans++;
            }
            
        }
        return ans*ans;
    }
};