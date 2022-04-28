class Solution {
public:
    
    int x[4]={0,-1,0,1};
    int y[4]={1,0,-1,0};
    
    bool bfs(vector<vector<int>>&heights,int &mid){
        
        int n=heights.size();
        int m=heights[0].size();
        
        queue<pair<int,int>>q;
        vector<vector<bool>>vis(101,vector<bool>(101,false));
        
        vis[0][0]=true;
        q.push({0,0});
        
        while(!q.empty()){
            
            pair<int,int>x1=q.front();
            q.pop();
            int i=x1.first;
            int j=x1.second;
            if(i==n-1 && j==m-1){
                return true;
            }
            
            for(int d=0;d<4;d++){
                
                if(i+x[d]>=0 && i+x[d]<n && j+y[d]>=0 && j+y[d]<m&& !vis[i+x[d]][j+y[d]]){
                    
                    if(abs(heights[i][j]-heights[i+x[d]][j+y[d]])<=mid){
                        
                        vis[i+x[d]][j+y[d]]=true;
                        q.push({i+x[d],j+y[d]});
                        
                    }
                    
                }
                
            }
            
        }
        return false;
        
    }
    
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        int l=0,r=1e6+7,mid;
        int ans=-1;
        
       
        while(r>=l){
            
            mid=l+(r-l)/2;
            
            if(bfs(heights,mid)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
            
        }
        return ans;
        
    }
};