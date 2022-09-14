class Solution {
public:
    vector<vector<int>> generate(int n) {
      // 1
      // 1 1
      // 1 2 1
      // 1 3 3 1
      // 1 4 6 4 1
        
       vector<vector<int>>v(n,vector<int>());;
       v[0].push_back(1);
       
       for(int i=1;i<n;i++){
           v[i].push_back(1);
           for(int j=1;j<i;j++){
               v[i].push_back(v[i-1][j]+v[i-1][j-1]);
           }
           v[i].push_back(1);
       }
        return v;
    }
};