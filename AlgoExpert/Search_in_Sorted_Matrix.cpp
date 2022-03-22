#include <vector>
using namespace std;

vector<int> searchInSortedMatrix(vector<vector<int>> matrix, int target) {
  // Write your code here.
	int r=0;
	int c=matrix[0].size()-1;
	while(r<matrix.size()&&c>=0){
		if(matrix[r][c]>target){
			c--;
		}
		else if (matrix[r][c]<target){
			r++;
		}
		else{
			return {r,c};
		}
	}
  return {-1,-1};
}
