class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int rot) {
     
        int n=grid.size();
        int m=grid[0].size();
        vector<int>arr;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr.push_back(grid[i][j]);
            }
        }
        int j=0;int k=0;
        rot=(rot)%(m*n);
        
        for(int i=m*n-rot;i<m*n;i++){
            if(k==m){
                j++;
                k=0;
            }
            grid[j][k]=arr[i];
            
            k++;
        }
        for(int i=0;i<m*n-rot;i++){
            if(k==m){
                j++;
                k=0;
            }
            grid[j][k]=arr[i];
            
            k++;
        }
        return grid;
    }
};