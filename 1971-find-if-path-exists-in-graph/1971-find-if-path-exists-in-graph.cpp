class Solution {
public:
    int parent[200005];
    int rank[200005];
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
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
          for(int i=0;i<=n;i++){
              make_set(i);
          }
          for(int i=0;i<edges.size();i++){
              union_set(edges[i][0],edges[i][1]);
          }
          return find_set(source)==find_set(destination);
    }
};