class Solution {
public:
    

    
    int max(int i,int j){
        if(i>=j){
            return i;
        }
        return j;
    }
     int min(int i,int j){
        if(i<=j){
            return i;
        }
        return j;
    }
        
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        
        vector<vector<int>>val(mat.size()+1,vector<int>(mat[0].size()+1,0));
        vector<vector<int>>ans(mat.size(),vector<int>(mat[0].size(),0));
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                
                val[i+1][j+1]=mat[i][j]+val[i+1][max(0,j)];
                
            }
        }
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                
                val[i+1][j+1]=val[i][j+1]+val[i+1][j+1];
          
            }
          
        }
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                
                int si=max(0,i-k)+1;
                int sj=max(0,j-k)+1;
                int ui=min(mat.size(),i+k+1);
                int uj=min(mat[0].size(),j+k+1);
                
                ans[i][j]=val[ui][uj]+val[si-1][sj-1]-val[si-1][uj]-val[ui][sj-1];
                
            }
        }
        
        return ans;
    }
};