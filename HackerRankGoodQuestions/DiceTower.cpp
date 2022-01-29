//Dice Tower Problem ==> How many dices to stack inorder to get the required sum. Count only outer sides of dice

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
		int dice=ceil((double)n/21);
		if(dice==1 && n==21) cout<<dice<<"\n";
		else if(dice==1 && n<21) cout<<"-1\n";
		else{
			
			int l=0,r=1e18;
			while(r>=l){
				long long mid=l+(r-l)/2;
				long long hidden=(dice+mid-2)*1LL*7;
				long needed=21*1LL*(dice+mid)-hidden-n;

				if(needed>1&&needed<=12){
					cout<<mid+dice<<"\n";
					return;
				}
				else if(needed>12){
					r=mid-1;
				}
				else{
					l=mid+1;
				}
				
			}
			cout<<"-1\n";
			return;
			
			
		}
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}
}