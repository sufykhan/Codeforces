#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;
intl t,one;
string s;
int main(){
  cin>>t;
  rep(i,0,t){
      one=0;
      cin>>s;
      rep(i,0,s.size()-1){
          if(s[i]=='1' && s[i+1]=='1'){
              one=1;
          }
          if(s[i]=='0' && s[i+1]=='0' && one==1){
              one=-1;
              break;
          }
      }
      if(one==-1){
          cout<<"NO\n";
      }
      else{
          cout<<"YES\n";
      }
  }
}