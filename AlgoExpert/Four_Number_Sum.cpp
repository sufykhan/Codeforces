#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourNumberSum(vector<int> arr, int target) {
  // Write your code here.
	unordered_map<int,vector<vector<int>>>mp;
	vector<vector<int>>ans;
	int n=arr.size();
	for(int i=1;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(mp.find(target-arr[i]-arr[j])!=mp.end()){
				for(vector<int>vec:mp[target-arr[i]-arr[j]]){
					vec.push_back(arr[i]);
					vec.push_back(arr[j]);
					ans.push_back(vec);
				}
			}
		}
		for(int j=0;j<i;j++){
		   if(mp.find(arr[i]+arr[j])==mp.end()){
				mp[arr[i]+arr[j]]=vector<vector<int>>{{arr[j],arr[i]}};
			 }
			 else{
				mp[arr[i]+arr[j]].push_back(vector<int>{arr[j],arr[i]});
			 }
		}
		
	}
	
	 return ans;

	}
 
