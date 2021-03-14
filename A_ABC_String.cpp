#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;

bool solve(string s,intl n){
  if(s[0]==s[n-1]){
      return false;
  }
  intl count=0;intl flag=2;
  rep(c,0,2){
      count=0;
   rep(i,0,n){
       if(s[i]==s[0])
       {
           count+=1;
       }
       else if(s[i]==s[n-1])
       {
           count-=1;
       }
       else{
           if(c==0){
           count-=1;
           }
           else{
               count+=1;
           }
       }
       if(count<0){
           break;
       }
   }
   if(count<0 || count>0){
      
   flag-=1;
   }
  }

  if(flag==0){
      return false;
  }
  return true;
}

int main(){
   intl t;cin>>t;
   rep(ii,0,t){
     string s;cin>>s;
     if(solve(s,s.size())){
         cout<<"YES\n";
     }
     else{
         cout<<"NO\n";
     }
   }
}