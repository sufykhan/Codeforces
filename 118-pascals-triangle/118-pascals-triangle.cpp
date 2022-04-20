class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans(n,vector<int>());
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                ans[i].push_back(0);
                if(j==i || j==0) ans[i][j]=1;
                
            }
        }
        for(int i=2;i<n;i++){
            for(int j=1;j<i;j++){
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
                //cout<<ans[i][j]<<" ";
            }
            //cout<<"\n";
        }
        return ans;
    }
};