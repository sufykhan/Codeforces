#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int col[4]={0,0,1,-1};
    int row[4]={1,-1,0,0};
    bool visited[302][302];
    
    bool isSafe(int i,int j,vector<vector<char>>& grid){
       if(( i>=0 && j>=0 && i<grid.size()&&j<grid[0].size()  && !visited[i][j])&&grid[i][j]=='1'){
           visited[i][j]=true;
           return true;   
       }  
    return false;
    }
    void BFS(vector<vector<char>>& grid,int i,int j){
       int r=grid.size();
       int c=grid[0].size();
       queue<pair<int,int>>q;
       q.push(make_pair(i,j));
       visited[i][j]=true;
       while(!q.empty()){
       int x=q.front().first;
       int y=q.front().second;
       for(int i=0;i<4;i++){
           if(isSafe(x+row[i],y+col[i],grid)){
               q.push(make_pair(x+row[i],y+col[i]));
           }
       }
       q.pop();
    
       }
    }
    int numIslands(vector<vector<char>>& grid) {
       memset(visited,0,sizeof(visited));
       int r=grid.size();
       int c=grid[0].size();
        int cnt=0;
       for(int i=0;i<r;i++){
           for(int j=0;j<c;j++){
               if(!visited[i][j] && grid[i][j]=='1')
               {
                   BFS(grid,i,j);
                   cnt++;
               }
           }
       }
        return cnt;
    }
};

int main(){
    
}