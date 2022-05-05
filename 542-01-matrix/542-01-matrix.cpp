class Solution {
public:
    
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        vector<vector<int>>ans(mat.size(),vector<int>(mat[0].size(),INT_MAX));
        
        queue<pair<int,int>>q;
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    ans[i][j]=0;
                }
            }
        }
        
        
        while(!q.empty()){
            
            pair<int,int>pos=q.front();
            q.pop();
            
            for(int i=0;i<4;i++){
                
                int di=pos.first+dx[i];
                int dj=pos.second+dy[i];
                
                if(di>=0 && dj>=0 && di<mat.size() && dj<mat[0].size()&&mat[di][dj]==1){
                    ans[di][dj]=min(ans[di][dj],1+ans[pos.first][pos.second]);
                    if(1+ans[pos.first][pos.second]==ans[di][dj]){
                        q.push({di,dj});
                    }
                    
                }
            }
            
        }
        return ans;
        
    }
};