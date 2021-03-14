#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;

bool solve(intl a,intl b,intl c,intl d){

}
int main(){
   intl t;cin>>t;
   rep(ii,0,t){
     intl D,C;cin>>D>>C;
     intl a=0,b=0;
     rep(i,0,3){
         intl x;
         cin>>x;
         a+=x;
     }
     rep(i,0,3){
         intl x;
         cin>>x;
         b+=x;
     }
    
      if(solve(a,b,C,D)){
       cout<<"YES\n";
      }
      else{
          cout<<"NO\n";
      }
   }
}