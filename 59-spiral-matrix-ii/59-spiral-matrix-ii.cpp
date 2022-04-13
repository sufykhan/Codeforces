class Solution {
public:
    
    bool isSafe(vector<vector<int>>vis,int i,int j,int n){
        
        if(i>=0 && i<n&&j>=0&&j<n&&vis[i][j]==0){
            return true;
        }
        return false;
    }
    vector<vector<int>> generateMatrix(int n) {
     
        vector<vector<int>>vis(n,vector<int>(n,0));
        
        vector<int>dy={1,0,-1,0};
        vector<int>dx={0,-1,0,1};
        int l=0,i=0,j=0;
        for(int k=1;k<=n*n;k++){
            if(isSafe(vis,i,j,vis.size())){
                vis[i][j]=k;
                
                i=i+dx[l];
                j=j+dy[l];
                
            }
            else{
                i=i-dx[l];
                j=j-dy[l];
                
                l++;
                l=l%4;
                
                i=i+dx[l];
                j=j+dy[l];
                
                k--;
            }
        }
        
        return vis;
        
        
    }
};