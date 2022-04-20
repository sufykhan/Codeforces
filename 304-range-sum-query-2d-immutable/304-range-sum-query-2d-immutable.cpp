class NumMatrix {
public:
    vector<vector<int>>val;
    NumMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>>ans(matrix.size()+1,vector<int>(matrix[0].size()+1,0));
        val=ans;
        for(int i=1;i<matrix.size()+1;i++){
            for(int j=1;j<matrix[0].size()+1;j++){
                val[i][j]=val[i-1][j]+val[i][j-1]+matrix[i-1][j-1]-val[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++;
        row2++;
        col1++;
        col2++;
        //return 0;
        return val[row2][col2]+val[row1-1][col1-1]-val[row2][col1-1]-val[row1-1][col2];
    }
    
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */