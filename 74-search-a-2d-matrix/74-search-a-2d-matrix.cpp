class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
        int i=0;
        int j=matrix[0].size()-1;
        
        while(true){
            
            if(j<0 || i>=matrix.size()){
                return false;
            }
            
            if(matrix[i][j]==target){
                return true;
            }
            
            if(target>matrix[i][j]){
                i++;
            }
            else{
                j--;
            }
            
        }
        
    }
};