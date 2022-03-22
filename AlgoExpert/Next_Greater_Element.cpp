#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> arr) {
 
	vector<int>vec(arr.size(),-1);
	stack<int>s;

	for(int i1=0;i1<2*arr.size();i1++){
	
		int i=i1%arr.size();

		while(!s.empty()&&arr[i]>arr[s.top()]){
			     vec[s.top()]=arr[i];
			     s.pop();
		}
		s.push(i);
	}
	
  return vec;
}
