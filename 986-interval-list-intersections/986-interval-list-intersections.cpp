class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& v1, vector<vector<int>>& v2) {
        
        int i=0,j=0;
        
        vector<vector<int>>ans;
        cout<<i<<" "<<j<<"\n";
        while(i<v1.size()&&j<v2.size()){
            if (v1[i][1]<v2[j][0] ){
                 i++;
            }
            else if (v1[i][0]>v2[j][1] ){
                 j++;
            }
            else if(v1[i][0]==v2[j][0] && v1[i][1]==v2[j][1]){
                 ans.push_back({v2[j][0],v2[j][1]});
                 i++;
                 j++;
            }
            else if(v1[i][0]<=v2[j][0] && v1[i][1]>=v2[j][1]){
                 ans.push_back({v2[j][0],v2[j][1]});
                 j++;
            }
            else if(v1[i][0]>=v2[j][0] && v1[i][1]<=v2[j][1]){
                 ans.push_back({v1[i][0],v1[i][1]});
                 i++;
            }
            else if(v1[i][0]<=v2[j][0] && v1[i][1]<=v2[j][1]){
                 ans.push_back({v2[j][0],v1[i][1]});
                 i++;
            }
            else if (v1[i][0]>=v2[j][0] && v1[i][1]>=v2[j][1]){
                 ans.push_back({v1[i][0],v2[j][1]});
                 j++;
            }
            
            cout<<i<<" "<<j<<"\n";
           
        }
        return ans;
        
    }
};