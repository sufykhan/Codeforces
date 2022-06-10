class Solution {
public:
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    int give(vector<vector<int>>&grid,int i,int j,int n){
        if(i>=0 && j>=0 && i<n &&j<n){
            return grid[i][j];
        }
        return 0;
    }
    int surfaceArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<4;k++){
                    int val=give(grid,i+dx[k],j+dy[k],n);
                    val=max(0,grid[i][j]-val);
                    ans+=val;
                    
                }
                if(grid[i][j]!=0){
                        ans+=2;
                }
            }
        }
     
     
        return ans;
    }
};