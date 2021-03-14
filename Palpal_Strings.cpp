#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;

void solve(string s,int n){
   intl arr[26]={0};
   rep(i,0,n){
       int pos=(int)s[i]-97;
       arr[pos]++;
   }
   intl oddi=0,eve=0;
   rep(i,0,26){
       if(arr[i]==1){
            oddi++;
       }
       else{
           if(arr[i]>0 && arr[i]%2==0)
           {
               eve++;
           }
       }
   }
   if(eve>=oddi){
   cout<<"YES\n";
   }
   else{
       cout<<"NO\n";
   }
}

int main(){
   intl n;cin>>n;
   rep(i,0,n){
      string s;cin>>s;
      solve(s,s.length());
   }
}

