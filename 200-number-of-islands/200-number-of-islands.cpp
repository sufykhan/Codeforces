class Solution {
public:
    
    bool isSafe(int i,int j,vector<vector<char>>&grid){
        if(i>=0 && i<grid.size()&&j>=0&&j<grid[0].size()&&grid[i][j]=='1'){
            return true;
        }
        return false;
    }
    void dfs(int i,int j,vector<vector<char>>& grid){
        
        if(isSafe(i,j,grid)){
              grid[i][j]='0';
              
              dfs(i+1,j,grid);
              dfs(i-1,j,grid);
              dfs(i,j+1,grid);
              dfs(i,j-1,grid);
        }
        
        
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                
                if(grid[i][j]!='0'){
                    dfs(i,j,grid);
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};