#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
typedef vector<intl> vi;
typedef pair<intl,intl> pi;

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define rep(i,a,n) for(intl i=a;i<n;i++)

intl M=1e9+7;
void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void FILEIO(){
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
}
string s="";
intl n;
//fn=0+fn-1,1+reverse(fn-1)
void fn(intl param){
  if(param==n){
      //print string
  }
  else{
      if(param==0){
          s+='0';
      }
      if(param==1){
          s+='1';
      }
      s+=
  }
}
int main(){
    FASTIO();
    cin>>n;intl ans=0;
    fn(0);
}