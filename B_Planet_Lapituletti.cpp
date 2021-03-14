#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
#define rep(i,a,n) for(intl i=a;i<n;i++)

vector <intl> go = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};

void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool solve(intl H,intl M,intl h,intl m)
{
   H=(H%10)*10+H/10;
   M=(M%10)*10+M/10;

   if(go[H%10]!=-1 && go[H/10]!=-1 && go[M%10]!=-1 && go[M/10]!=-1){
       H=go[H/10]*10+go[H%10];
       M=go[M/10]*10+go[M%10];
 
   }
   else{
       return false;
   }
   if(H>=m || M>=h ){
       return false;
   }
   
   return true;
}
string convert(intl H){
 string h=to_string(H);
 h.insert(0,2-h.length(),'0');
 return h;
}
int main(){
    FASTIO();
   intl t,h,m,H,M;cin>>t;bool flag;
   string s;
   rep(i,0,t){
       cin>>h>>m;flag=false;
       cin>>s;
       H = (s[0] - '0') * 10 + s[1] - '0';
       M = (s[3] - '0') * 10 + s[4] - '0';

       while(h>H){
           if(M==m){
               M=0;
               H++;
               if(H==h){
                   break;
               }
           }
           if(solve(H,M,h,m)){
               flag=true;
               break;
           }
           M++;
       }
      
      if(flag){
          cout<<convert(H)<<":"<<convert(M)<<"\n";
      }
      else{
          cout<<"00:00\n";
      }
   }
}