class Solution {
public:
    int n,m;
    int dp[101][101][206];
    bool dfs(vector<vector<char>>& grid,int i,int j,int cnt){
        
        if(i>=n || j>=m) {
            return 0;
        }
        if(grid[i][j]=='(') {
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt<0) {
            return 0;
        }
        if(i==n-1&&j==m-1){
            return cnt==0;
        }
        if(dp[i][j][cnt]!=-1){
            return dp[i][j][cnt];
        }
        return dp[i][j][cnt]=dfs(grid,i+1,j,cnt)||dfs(grid,i,j+1,cnt);
        
    }
    
    bool hasValidPath(vector<vector<char>>& grid) {
        
        n=grid.size();
        m=grid[0].size();
         memset(dp, -1, sizeof(dp));
        return dfs(grid,0,0,0);
        
    }
};