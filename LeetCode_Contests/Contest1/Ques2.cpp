#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //28min
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& mp) {
        
        
        vector<vector<int>>grid1=grid;
        int n=grid.size(),m=grid[0].size();
        
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m;j++){
                int mini=INT_MAX;
                for(int k=0;k<m;k++){
                    mini=min(mini,grid1[i][k]+mp[grid[i][k]][j]);
                }
                grid1[i+1][j]+=mini;
                //cout<<grid1[i+1][j]<<" ";
            }
            //cout<<"\n";
        }
        int ans=INT_MAX;
        for(int j=0;j<m;j++){
            ans=min(ans,grid1[n-1][j]);
        }
        return ans;
    }
};

int main(void){
    Solution s;
    vector<string>v{"3","11","5","+","-"};
    int x=s.eval(v);
    cout<<x<<"\n";
    return 0;
}
