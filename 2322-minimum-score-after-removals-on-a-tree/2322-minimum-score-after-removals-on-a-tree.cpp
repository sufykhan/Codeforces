class Solution {
public:
    vector<vector<int>>adj;
    vector<bool>vis;
    vector<vector<int>>pc;
    vector<int>nums;
    vector<int>xorValues;
    vector<int>par;
    vector<vector<int>>child;
    
    int dfs(int i){
        int xorSum=nums[i];
        for(auto x:par) child[x][i]=true;
        par.push_back(i);
        vis[i]=true;
        for(auto &x:adj[i]){
            if(!vis[x]){
                 pc.push_back({i,x});
                 xorSum=xorSum^dfs(x);
            }
           
        }
        par.pop_back();
        return xorValues[i]=xorSum;
        
    }
    int minimumScore(vector<int>& nums, vector<vector<int>>& edges) {
        
        int n=nums.size();
        
        this->nums=nums;
        vis=vector<bool>(n,false);
        xorValues=vector<int>(n,0);
        child=vector<vector<int>>(n,vector<int>(n,false));
        adj=vector<vector<int>>(n,vector<int>(n));
        par=vector<int>();
        pc=vector<vector<int>>();
        
        for(int i=0;i<edges.size();i++){
           adj[edges[i][0]].push_back(edges[i][1]);
           adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        dfs(0);
        
        int ans=INT_MAX;
        for(int i=0;i<pc.size();i++){
            for(int j=i+1;j<pc.size();j++){
                int a=pc[i][1],b=pc[j][1];
                int xa=xorValues[a],xb=xorValues[b],xc=xorValues[0];
                
                if(child[a][b]){
                    xc=xc^xa;xa=xa^xb;
                }
                else{
                    xc=xc^xa;xc=xc^xb;
                }
                
                ans=min(max({xa,xb,xc})-min({xa,xb,xc}),ans);
            }
        }
        return ans;
        
    }
};