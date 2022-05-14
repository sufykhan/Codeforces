class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>&v) {
      
        sort(v.begin(),v.end());
        vector<vector<int>>v1;
        for(int i=0;i<(int)v.size()-1;i++){
            if(v[i][1]>=v[i+1][0]){
                v[i+1][0]=v[i][0];
                v[i+1][1]=max(v[i+1][1],v[i][1]);
            }
            else{
                v1.push_back({v[i][0],v[i][1]});
            }
        }
        v1.push_back({v[(int)v.size()-1][0],v[(int)v.size()-1][1]});
        return v1;
       
    }
};