#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
#define rep(i,a,n) for(intl i=a;i<n;i++)


void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve(intl n){
  
}
intl cmin(intl egg,intl choco,intl n,intl a,intl b,intl c){
    intl ans=0;
   if(egg>choco){
     ans=choco*c+((egg-choco)/2)*a;
   }
   else{
     ans=min(ans,egg*c+((-egg+choco)/3)*b);
   }
   return ans;
}
intl bmin(intl egg,intl choco,intl n,intl a,intl b,intl c){
    intl ans=0;
   if(egg>choco){
     ans=choco*c+((egg-choco)/2)*a;
   }
   else{
     ans=min(ans,egg*c+((-egg+choco)/3)*b);
   }
   return ans;
}
bool possible(intl egg,intl choco,intl n){
    intl ans=0;
   if(egg>choco){
     ans+=choco+(egg-choco)/2;
   }
   else{
     ans+=egg+(-egg+choco)/3;
   }
   if(ans>=n){
       return true;
   }
   return false;
}
int main(){
    FASTIO();
   intl t;cin>>t;
   rep(ii,0,t){
     intl n,egg,choco,a,b,c;cin>>n>>egg>>choco>>a>>b>>c;
     intl maxa=egg/(2);
     intl maxb=choco/(3);
     intl maxc=min(egg,choco);
     cout<<maxa<<" "<<maxb<<" "<<maxc<<"\n";
     cout<<maxa*a<<" "<<maxb*b<<" "<<maxc*c<<"\n";
     if(!possible(egg,choco,n)){
         cout<<"-1\n";
     }
     else{
        if(c<=a && c<=b){
            cout<<cmin(egg,choco,n,a,b,c)<<"\n";
        }
        elseif()
     }
   }
   
}
