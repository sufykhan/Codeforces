#include <bits/stdc++.h>
using namespace std;


void solve(){
   int n,y;cin>>n>>y;
   int i=0;
   map<int,int>mp;
   while(n>1){
     int a=i^y;
     if(a==0||a>500000||mp[a]==1){
       i++;
        continue;
     }
      cout<<i<<" ";
      y=a;
      mp[i]=1;
      n--;
      i++;
   }
   cout<<y<<"\n";
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}