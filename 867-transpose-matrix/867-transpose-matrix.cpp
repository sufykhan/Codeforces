class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>&arr) {
        
        int n=arr.size();
        int m=arr[0].size();
        if(n==m){
            for(int i=0;i<n;i++){
               for(int j=0;j<n;j++){
                   if(i>j){
                       swap(arr[i][j],arr[j][i]);
                   }
               }

            }

            return arr;
        }
        else{
            vector<vector<int>>ans(m,vector<int>(n));
            for(int i=0;i<n;i++){
               for(int j=0;j<m;j++){
        
                  ans[j][i]=arr[i][j];
                   
               }

            }
            return ans;
        }
    }
};