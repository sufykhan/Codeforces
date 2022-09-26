class Solution {
public:
    int parent[27];
    int rank[27];
    void make_set(int v){
        parent[v]=v;
        rank[v]=1;
    }
    int find_set(int v){
        if(parent[v]==v) return v;
        return parent[v]=find_set(parent[v]);
    }
    void union_set(int u,int v){
        u=find_set(u);
        v=find_set(v);
        if(u!=v){
            if(rank[u]<rank[v]){
                swap(u,v);
            }
            parent[v]=u;
            if(rank[u]==rank[v]){
                rank[u]++;
            }
        }
    }
    bool equationsPossible(vector<string>&nums) {
        for(int i=1;i<=26;i++){
            make_set(i);
        }
        
        for(auto x:nums){
            int a=x[0]-'a';
            int b=x[3]-'a';
            if(x[1]=='='){
                union_set(a,b);
            }
        }
        for(auto x:nums){
            int a=x[0]-'a';
            int b=x[3]-'a';
            if(x[1]=='!'){
                if(find_set(a)==find_set(b)){
                    return false;
                }
            }  
        }
        return true;
    }
};