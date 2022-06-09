class Solution {
public:
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,1,-1};
    bool valid(int i,int j,vector<vector<int>>&grid){
        if(i<0 || j<0 || i>=grid.size()|| j>=grid[0].size() || grid[i][j]!=1){
            return false;
        }
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {

        queue<vector<int>>q;
        int tot=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2) q.push({i,j,0});
                tot+=grid[i][j]==1;
            }
        }
        int time=0;
        int i1,j1;
        
        while(!q.empty()){
            int size=q.size();
            time++;
            while(size--){
                vector<int>top=q.front();
                q.pop();
                i1=top[0];
                j1=top[1];
                for(int i=0;i<4;i++){
                    if(valid(i1+dx[i],j1+dy[i],grid))
                    {
                        grid[i1+dx[i]][j1+dy[i]]=2;
                        q.push( {i1+dx[i],j1+dy[i]} );
                        tot--;
                    }
                }
            }
           
        }
        if(tot>0) return -1;
        if(time==0) return 0;
        return time-1;
    }
};