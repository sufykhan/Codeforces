class Solution {
public:
    int parent[1007];
    int rank[1007];
    void  make_set(int u){
        parent[u]=u;
        rank[u]=1;
    }
    int find_set(int v){
        if(parent[v]==v) return v;
        return parent[v]=find_set(parent[v]);
    }
    void union_set(int u,int v){
        u=find_set(u);
        v=find_set(v);
        
        if(u!=v){
            if(rank[u]>rank[v]){
                swap(u,v);
            }
            parent[u]=v;
            if(rank[u]==rank[v]){
                rank[v]++;
            }
        }
    }
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        for(int i=0;i<=1005;i++) make_set(i); 
        for(auto x:edges){
            if(find_set(x[0])==find_set(x[1])){
                return x;
            }
            union_set(x[0],x[1]);
        }
        return {};
    }
};