#include <vector>
#include <stack>
using namespace std;

static void countS(vector<int>&arr,vector<int>&nextS){
	int n=arr.size();	
	stack<int>s;
	int pos=0;
	while(pos<n){
		if(s.empty()||arr[pos]>=arr[s.top()]){
			s.push(pos);
			pos++;
		}
		else{
			while(!s.empty()&&arr[s.top()]>arr[pos]){
				nextS[s.top()]=pos;
				s.pop();
			}
			s.push(pos);
			pos++;
		}
	}
	
}

int largestRectangleUnderSkyline(vector<int>arr) {
  // Write your code here.
	
  int n=arr.size();
	//if(n==0) return 0;
	vector<int>nextS(n,-1);
	vector<int>RprevS(n,-1);
	vector<int>prevS(n,-1);
	//ans=(nextS[i]-prevS[i])*arr[i]
  countS(arr,nextS);
	reverse(arr.begin(),arr.end());
	countS(arr,RprevS);
	for(int i=0;i<n;i++){
		if(nextS[i]==-1) nextS[i]=n;
		if(RprevS[i]==-1) RprevS[i]=n;
	}
	for(int i=0;i<n;i++){
		prevS[i]=n-RprevS[n-i-1]-1;
	}
	reverse(arr.begin(),arr.end());
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
		int val=(nextS[i]-prevS[i]-1)*arr[i];
		maxi=max(maxi,val);
	}
	if(maxi==INT_MIN) return 0;
  return maxi;
	
}
