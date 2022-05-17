class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0;
        int j=n*m-1;
    
        
        while(j>=i){
            
            int mid=i+(j-i)/2;
            
            int ki=mid/m;
           
            int kj=(mid)%m;
            
            if(target==matrix[ki][kj]){
                return true;
            }
            if(target>matrix[ki][kj]){
                i=mid+1;
            }
            else if (target<matrix[ki][kj]){
                j=mid-1;
            }   
        }
        return false;
    }
};