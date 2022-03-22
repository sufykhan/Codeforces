using namespace std;

bool hasSingleCycle(vector<int> array) {
  // Write your code here.
	int pointer=0,cnt=0,n=array.size();
	vector<bool>vis(n,false);
	while(cnt<n){
		if(!vis[pointer]){
			cnt++;
			vis[pointer]=true;
			pointer=(pointer+array[pointer])%n;
			if(pointer<0) pointer=pointer+n;
		}
		else{
			return false;
		}
	}
	return pointer==0;
	
	
	
  return -1;
}
