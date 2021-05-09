// Given a boolean 2D matrix, find the number of islands. A group of connected 1s forms an island. 
//For example, the below matrix contains 5 islands
// Example: 
 

// Input : mat[][] = {{1, 1, 0, 0, 0},
//                    {0, 1, 0, 0, 1},
//                    {1, 0, 0, 1, 1},
//                    {0, 0, 0, 0, 0},
//                    {1, 0, 1, 0, 1} 
// Output : 5


//Every element in matrix has 8 neighbours.

//https://www.geeksforgeeks.org/find-number-of-islands/

#include <bits/stdc++.h>
using namespace std;
const int n=5;
bool isOk(int row,int col,bool visited[][n],int mat[][n]){
    return (row>=0&&row<n&&col>=0&&col<n&& !visited[row][col]&&mat[row][col]);
}
void DFS(int row,int col,bool visited[][n],int mat[][n]){
      visited[row][col]=true;
      int posR[]={0,0,1,1,1,-1,-1,-1};
      int posC[]={1,-1,0,-1,1,0,-1,1};
      for(int i=0;i<8;i++){
          if(isOk(row+posR[i],col+posC[i],visited,mat)){
              DFS(row+posR[i],col+posC[i],visited,mat);
          }
      }
}

int main(){
    int mat[][5] = {{1, 1, 0, 0, 0},
                   {0, 1, 0, 0, 1},
                   {1, 0, 0, 1, 1},
                   {0, 0, 0, 0, 0},
                   {1, 0, 1, 0, 1} };
   bool visited[n][n];
   memset(visited,0,sizeof(visited));
    map<int,list<int>>adj;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==1 && !visited[i][j]){
               
                DFS(i,j,visited,mat);
                count++;
            }
        }
    }
    cout<<count<<'\n';
 
}