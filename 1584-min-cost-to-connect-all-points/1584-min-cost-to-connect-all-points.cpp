class Solution {
public:
    vector<int>parent;
    vector<int>rank;
    
    void UnionFind(int size) {
        parent = vector<int>(size);
        rank = vector<int>(size);
        for (int i = 0; i < size; ++i) {
            parent[i] = i;
        }
    }
    
    int find(int i){
    
        if(parent[i]!=i){
            parent[i]=find(parent[i]);
        }
        return parent[i];
    }
    bool Union(int i,int j){
        
        int group1=find(i);
        
        int group2=find(j);
        if(group1==group2){
            return false;
        }
        if (rank[group1] > rank[group2]) {
            parent[group2] = group1;
        } else if (rank[group1] < rank[group2]) {
            parent[group1] = group2;
        } else {
            parent[group1] = group2;
            rank[group2] += 1;
        }
        
        return true;
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        
        int n=points.size();
        vector<pair<int,pair<int,int>>>E;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    E.push_back({abs(points[i][0]-points[j][0])+(abs(points[i][1]-points[j][1])),{i,j}});
                }
                
            }
        }
        
        sort(E.begin(),E.end());
       
      
        UnionFind(n);
        
        int ans=0;
        
       
        for(auto e:E){
            
            if(Union(e.second.first,e.second.second)){
                
                ans+=e.first;
            }
        }
        return ans;
    }
};