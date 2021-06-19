#include <bits/stdc++.h>
using namespace std;
 
string alpha = "abcdefghijklmnopqrstuvwxyz";
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    string s; cin >> s;
    vector<string> bfs = {""};
    for(int i = 0; i < bfs.size(); i ++){
      string c = bfs[i];
      if(s.find(c) == string::npos){
        cout << c << "\n";
        break;
      }
      for(auto&j:alpha){
        bfs.push_back(c+j);
      }
    }
  }
}
