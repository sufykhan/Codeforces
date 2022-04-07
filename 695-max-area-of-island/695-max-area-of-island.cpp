class Solution {
public:
    
    bool isSafe(int i,int j,vector<vector<int>>&grid){
        if(i>=0 && i<grid.size()&&j>=0&&j<grid[0].size()&&grid[i][j]==1){
            return true;
        }
        return false;
    }
    
    void dfs(int i,int j,vector<vector<int>>&grid,int &ans){
        
        if(isSafe(i,j,grid)){
            ans++;
            grid[i][j]=0;
            dfs(i+1,j,grid,ans);
            dfs(i-1,j,grid,ans);
            dfs(i,j+1,grid,ans);
            dfs(i,j-1,grid,ans);
        }
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
            
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0){
                    int val=0;
                    dfs(i,j,grid,val);
                    ans=max(ans,val);
                }
            }
        }
        
        return ans;
    }
};