#include <vector>
using namespace std;

string arr[10]={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void helper(string curr,vector<int>v,vector<string>&ans){
	if(curr.size()==v.size()){
		ans.push_back(curr);
		return;
	}
	//v=1905
	int start=curr.size();
  string xx=arr[v[start]];
	for(auto x:xx){
			curr+=x;
			helper(curr,v,ans);
			curr.pop_back();
	}
}
vector<string> phoneNumberMnemonics(string s) {
  // Write your code here.
	vector<int>v;
	vector<string>ans;
	for(auto x:s){
		v.push_back(x-'0');
	}
	string curr="";
	helper(curr,v,ans);
	return ans;
  
}
