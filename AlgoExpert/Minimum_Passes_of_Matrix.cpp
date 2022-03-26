#include <vector>
#include <queue>
using namespace std;

void getP(vector<vector<int>>&matrix,vector<vector<int>>&pos){
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[0].size();j++){
			if(matrix[i][j]>0){
				pos.push_back(vector<int>{i,j,0});
			}
		}
	}
}

void getA(vector<vector<int>>&matrix,vector<vector<int>>&pos,int i,int j,int pass){
	if(i+1<matrix.size() && matrix[i+1][j]!=0){
			pos.push_back({i+1,j,pass+1});
		  matrix[i+1][j]=0;
	}
	if(i-1>=0 && matrix[i-1][j]!=0){
			pos.push_back({i-1,j,pass+1});
		  matrix[i-1][j]=0;
	}
	if(j-1>=0 && matrix[i][j-1]!=0){
			pos.push_back({i,j-1,pass+1});
		  matrix[i][j-1]=0;
	}
	if(j+1<matrix[0].size() && matrix[i][j+1]!=0){
			pos.push_back({i,j+1,pass+1});
		  matrix[i][j+1]=0;
	}
}
bool checkN(vector<vector<int>>matrix){
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[0].size();j++){
			
		  if(matrix[i][j]<0){
				return true;
			}
			
		}
	}
	return false;
}
void printN(vector<vector<int>>matrix){
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[0].size();j++){
			
		  cout<<matrix[i][j]<<" ";
			
		}
		cout<<"\n";
	}
	cout<<"\n";
	
}
int minimumPassesOfMatrix(vector<vector<int>> matrix) {
  // Write your code here.
	vector<vector<int>>pos;
	getP(matrix,pos);
	queue<vector<vector<int>>>q;
	q.push(pos);
	int passes=0;
	while(!q.empty()){
		vector<vector<int>>curr=q.front();
		q.pop();
		
		for(auto x:curr){
			matrix[x[0]][x[1]]=0;
			passes=max(passes,x[2]);
		}
		printN(matrix);
		
		for(auto x:curr){
			cout<<x[2]<<" ---\n";
			int i=x[0],j=x[1];
			vector<vector<int>>posP;
			getA(matrix,posP,i,j,x[2]);
			q.push(posP);
		}
		
	}
	if(checkN(matrix)){ 
		return -1;
	}
	
	
  return passes;
}
