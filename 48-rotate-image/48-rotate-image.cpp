class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
       
        for(int i=0;i<(n+1)/2;i++){
            for(int j=0;j<n/2;j++){
                
                int x=i,y=j;int temp=matrix[x][y];
                for(int k=0;k<3;k++){
                    matrix[x][y]=matrix[n-y-1][x];
                    int tx=x,ty=y;
                    y=tx;
                    x=n-ty-1;
                }
                matrix[x][y]=temp;
               
            }
        }
    }
};