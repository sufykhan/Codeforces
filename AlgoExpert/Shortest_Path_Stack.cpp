#include <stack>
using namespace std;

string shortenPath(string path) {
  // Write your code here.
	
	path+='/';
	path+='f';
	int n=path.size();
	stack<string>s;
	string temp="";
	for(int i=0;i<n;i++){
	if(path[i]=='/' && path[i+1]!='/'){
			if(temp==".."){
				if((!s.empty() && s.top()=="..") || (s.empty() && path[0]!='/')){
					s.push(temp);
				}
				else if(!s.empty()) {
					s.pop();
				}
				
			}
			else if(temp=="."){
				
			}
			else{
				s.push(temp);
			}
			temp="";
		}
		else{
			temp+=path[i];
		}
	}
	string ans="";
	
	while(!s.empty()){
		string val=s.top();
		if(val.size()!=0) ans='/'+val+ans;
		s.pop();
	}
	if(path[0]!='/'){
		ans.erase(0,1);
	}
	if(ans.size()==0) ans="/";
	string val="";
	for(int i=0;i<ans.size();i++){
		if(ans[i]==ans[i+1] && ans[i]=='/'){
			
		}
		else{
			val+=ans[i];
		}
	}
	
  return val;
}
