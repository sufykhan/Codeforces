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
    
    vector<vector<string>> accountsMerge(vector<vector<string>>& nums) {
        
        for(int i=0;i<=1005;i++) make_set(i);
        vector<vector<string>>ans;
        map<string,int>mp;
        for(int i=0;i<nums.size();i++){
            for(int j=1;j<nums[i].size();j++){
                if(mp.find(nums[i][j])==mp.end()) mp[nums[i][j]]=i;
                else union_set(i,mp[nums[i][j]]);
            }
        }
        unordered_map<int,vector<string>>val;
        for(int i=0;i<nums.size();i++){
            for(int j=1;j<nums[i].size();j++){
                val[find_set(mp[nums[i][j]])].push_back(nums[i][j]);
            }
        }
        for(auto x:val){
            int k=x.first;
            vector<string>values;
            set<string>fin;
            for(auto y:x.second) fin.insert(y);
            values.push_back(nums[k][0]);
            for(auto y:fin) values.push_back(y);
            ans.push_back(values);
        }
        return ans;
           
    }
};