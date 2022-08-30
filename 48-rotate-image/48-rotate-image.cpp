class Solution {
public:
    
    void transpose(vector<vector<int>>&mat){
        for(int i=0;i<mat.size();i++){
            for(int j=i+1;j<mat.size();j++){
                int temp=mat[i][j];
                mat[i][j]=mat[j][i];
                mat[j][i]=temp;
            }
        }
    }
    void revert(vector<vector<int>>&mat){
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size()/2;j++){
                int temp=mat[i][j];
                mat[i][j]=mat[i][mat.size()-j-1];
                mat[i][mat.size()-j-1]=temp;
            }
        }
    }
    void recur(vector<vector<int>>&mat){
        transpose(mat);
        revert(mat);
    }
    void rotate(vector<vector<int>>& matrix) {
        recur(matrix);
    }
};