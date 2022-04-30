class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
    int dir[][2] = {{1,0},{0,1},{-1,0},{0,-1}};
    
	vector<vector<int>> grid(m, vector<int>(n, 0));
    int occupied = walls.size() + guards.size();
	
    for(auto& w: walls)
        grid[w[0]][w[1]] = 2;

    for(auto& g: guards)
        grid[g[0]][g[1]] = 3;

	// BFS from each guards position
    for(auto& g: guards){
        int x = g[0], y = g[1];

        for(int k=0; k<4; k++){
            int dx = x, dy = y;
            while(true){
                dx += dir[k][0];   
                dy += dir[k][1];

				// break if you see a wall, or if another guard is standing infront of you. ("not vision")
                if(min(dx, dy) < 0 || dx == m || dy == n || grid[dx][dy] == 2 || grid[dx][dy] == 3)
                    break;

				// if two guards can vision the same cell (1,0) or (1, 3) in example, dont occupy++
                if(grid[dx][dy] != 1){
                    grid[dx][dy] = 1;
                    occupied++;
                }
            }
        }
    }
    return m*n - occupied;
}
    int countUnguarded1(int n, int m, vector<vector<int>>& guards, vector<vector<int>>& walls) {
            
        
        vector<vector<int>>v(n,vector<int>(m,0));
        
        for(auto x:walls){
            v[x[0]][x[1]]=1;
        }
        for(auto x:guards){
            v[x[0]][x[1]]=1;
        }
        
        
     
        for(auto xx:guards){
           
            int x=xx[0];
            int y=xx[1];
            
            cout<<x<<" "<<y<<" \n";
            
            v[x][y]=3;
            
            for(int i=x-1;i>=0;i--){
                if(v[i][y]==0 || v[i][y]==2){
                    v[i][y]=2;
                }
                else{
                    break;
                }
            }
            for(int i=x+1;i<n;i++){
                if(v[i][y]==0 || v[i][y]==2){
                    v[i][y]=2;
                }
                else{
                    break;
                }
            }
            for(int i=y-1;i>=0;i--){
                if(v[x][i]==0||v[x][i]==2){
                    v[x][i]=2;
                }
                else{
                    break;
                }
            }
            for(int i=y+1;i<m;i++){
                if(v[x][i]==0||v[x][i]==2){
                    v[x][i]=2;
                }
                else{
                    break;
                }
            }
            
        }
        int ans=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //cout<<v[i][j]<<" ";
                if(v[i][j]==0){
                    ans+=1;
                }
            }
           // cout<<"\n";
        }
        return ans;
        
    }
};