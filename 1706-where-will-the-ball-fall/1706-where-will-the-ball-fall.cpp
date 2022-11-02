class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<int>v(m,-1);
        for(int k=0;k<m;k++){
            int x=k;
            bool flg=true;
            for(int i=0;i<n;i++){
                if(x+1<m && grid[i][x]==1 && grid[i][x+1]==1){
                     x+=1;
                }
                else if(x-1>=0 && grid[i][x]==-1 && grid[i][x-1]==-1){
                     x-=1;
                }
                else{
                    flg=false;
                }
            }
           
            if(flg){
                v[k]=x;
            }
            
        }
        return v;
    }
};