class Solution {
public:
    int comp(vector<vector<int>>& img1, vector<vector<int>>& img2){
        int n=img1.size();
        vector<vector<int>>grid(3*n-2,vector<int>(3*n-2,0));
        int maxi=0;
        for(int i=n-1;i<n+n-1;i++){
            for(int j=n-1;j<n+n-1;j++){
                grid[i][j]=img1[i-n+1][j-n+1];
             
            }
        }
        for(int i=0;i<2*n-1;i++){
            for(int j=0;j<2*n-1;j++){
                 
                   int cnt=0;
                   for(int i1=0;i1<n;i1++){
                        for(int j1=0;j1<n;j1++){
                            if(grid[i+i1][j+j1]==img2[i1][j1]){
                                if(img2[i1][j1]==1) cnt++;
                            }
                        }
                       
                   }
                  maxi=max(maxi,cnt);
            }
        }
        return maxi;
    }
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        return comp(img1,img2);
    }
};