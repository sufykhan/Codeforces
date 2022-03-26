#include <vector>
using namespace std;

bool isSafe(int i,int j,vector<vector<int>> matrix){
	if(i>=matrix.size()||j>=matrix[0].size()||i<0||j<0){
		return false;
	}
	return matrix[i][j]==1;
}
void dfs(vector<vector<int>>&matrix,int i,int j,int &len){
	if(isSafe(i,j,matrix)){
		 len++;
		 matrix[i][j]=-1;
		 dfs(matrix,i+1,j,len);
		 dfs(matrix,i-1,j,len);
		 dfs(matrix,i,j+1,len);
		 dfs(matrix,i,j-1,len);
	}
}

vector<int> riverSizes(vector<vector<int>> matrix) {
  // Write your code here.
	int n=matrix.size();
	int m=matrix[0].size();
  vector<int>ans;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==1){
				int len=0;
				dfs(matrix,i,j,len);
				ans.push_back(len);
			}
		}
	}
	
	
  return ans;
}
