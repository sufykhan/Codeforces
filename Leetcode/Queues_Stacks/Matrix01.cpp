#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rr[4]={1,-1,0,0};
    int rc[4]={0,0,-1,1};
    bool isSafe(int i,int j,vector<vector<int>>&mat){
          if(!(i<0||i>=mat.size()||j<0||j>=mat[0].size())){
             return true;      
          }
        return false;
    }
//     void DFS(int i,int j,vector<vector<int>>&dp,vector<vector<int>>&mat,int d=0){  
//         for(int ii=0;ii<4;ii++){
//         if(isSafe(i+rr[ii],j+rc[ii],mat)){
//         if(mat[i+rr[ii]][j+rc[ii]]==0){
//                    if(dp[i][j]!=-1) dp[i][j]=min(dp[i][j],d+1);
//                    else dp[i][j]=d+1; 
//         }
//         else{
//              DFS(i+rr[ii],j+rc[ii],dp,mat,d+1);
//         }
//         }
//         }
          
//     }
    
    int BFS(int ii,int jj, vector<vector<int>>&mat,vector<vector<int>>&dp){
        queue<pair<int,int>>q;
        q.push({ii,jj});
        int level=0;
        while(!q.empty()){
            level++;
            int size=q.size();
            for(int ir=0;ir<size;ir++){
                int i=q.front().first,j=q.front().second;
                  
                for(int x=0;x<=3;x++){
                    if(isSafe(i+rr[x],j+rc[x],mat)){
                      
                        if(mat[i+rr[x]][j+rc[x]]==0){
                            return level;
                        }
                        else{
                         q.push({i+rr[x],j+rc[x]});
                        }
                    }
                }
                q.pop();
            }
        }
        return -1;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    dp[i][j]=0;
                }
                else{
                    dp[i][j]=BFS(i,j,mat,dp);
                }
            }
        }
        return dp;
    }
};

int main(void){
    Solution s;
    vector<string>v{"3","11","5","+","-"};
    return 0;
}
