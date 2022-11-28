bool sortf(vector <int> v1, vector <int> v2){
        return v1[1]<v2[1];
    }
class Solution {
    public:
    vector<vector<int>> findWinners(vector<vector<int>>& arr) {
        vector<vector<int>>ans(2);
        unordered_map<int,int>mpw;
        unordered_map<int,int>mpl;
        unordered_map<int,int>mpm;
        int n=arr.size();
        
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            int u=arr[i][0];
            int v=arr[i][1];
            s.insert(u);
            s.insert(v);
            mpm[u]++;
            mpm[v]++;
            mpw[u]++;
            mpl[v]++;
        }
        
       for(auto val:s){
           
           if(mpw[val]==mpm[val]){
               ans[0].push_back(val);
           }
           if(mpl[val]==1){
               ans[1].push_back(val);
           }
           
       }
        for(int i=0;i<=1;i++){
            sort(ans[i].begin(),ans[i].end());
        }
        return ans;
    }
};