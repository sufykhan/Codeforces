#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;int arr[26]={0};
    int total_pairs=0;
    int total_odds=0;
    for(int i=0;i<n;i++){
        arr[char(s[i])-'a']++;
    }  
    for(int i=0;i<26;i++){
        total_pairs+=arr[i]/2;
        total_odds+=arr[i]%2;
    }
    if((total_pairs%k)*2+total_odds>=k){
        cout<<(total_pairs/k)*2+1<<"\n";
    }
    else{
         cout<<(total_pairs/k)*2<<"\n";
    }

}

int main(){

  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}