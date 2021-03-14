// Best Question
#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;

void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve(string s,intl n){
  intl flag=0;intl sum=0;
  rep(i,0,n){
   if(s[i]=='1'){
      if(flag==0){
          sum+=1;
          flag=1;
      }
   }
   else{
     flag=0;
   }
  }
  cout<<sum<<"\n";
}

int main(){
    FASTIO();
   intl t;cin>>t;
   rep(ii,0,t){
      string x;cin>>x;
      x.insert(0,'0',1);
      x.append("0");
      solve(x,x.length());
   }
}