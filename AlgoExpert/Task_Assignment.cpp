#include <vector>
using namespace std;

vector<vector<int>> taskAssignment(int k, vector<int> tasks) {
  vector<pair<int,int>>arr;
	for(int i=0;i<tasks.size();i++){
		arr.push_back({tasks[i],i});
	}
	sort(arr.begin(),arr.end());
	
	vector<vector<int>>ans;
	for(int i=0;i<k;i++){
		ans.push_back({arr[i].second,arr[2*k-i-1].second});
	}
	
  return ans;
}
