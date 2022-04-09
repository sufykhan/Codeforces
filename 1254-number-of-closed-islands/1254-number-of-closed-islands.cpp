class Solution {
public:
    bool isSafe(int i,int j,vector<vector<int>>&grid){
        if(i>=0 && i<grid.size()&&j>=0&&j<grid[0].size()&&grid[i][j]==0){
            return true;
        }
        return false;
    }
    
    void dfs(int i,int j,vector<vector<int>>&grid,bool &ans){
        
        if(isSafe(i,j,grid)){
            
            if(i==0||j==0||j==grid[0].size()-1||i==grid.size()-1) ans=false;
            
            
            grid[i][j]=1;
            dfs(i+1,j,grid,ans);
            dfs(i-1,j,grid,ans);
            dfs(i,j+1,grid,ans);
            dfs(i,j-1,grid,ans);
        }
        
    }
   
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    bool val=true;
                    dfs(i,j,grid,val);
                    ans+=val;
                    //ans=max(ans,val);
                }
            }
        }
        
        return ans;
    }
};