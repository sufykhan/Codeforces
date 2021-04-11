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


void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

 void print(vector<intl>v){
for(auto x:v){
cout<<x<<' ';
}
cout<<endl;
}

bool sortbySec(pair<intl,intl>&a,pair<intl,intl>&b){
    return (a.second>b.second);
}
intl t,n;
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
    intl zero,one;cin>>zero>>one;
    string s;cin>>s;
   // cout<<one<<" "<<zero<<"\n";
    intl n=(zero+one);bool flag=false;intl extra=0;
    rep(i,0,n/2){
     // cout<<s[i]<<" "<<s[n-i-1]<<endl;
      intl x=n-i-1;
      if(s[i]=='0'){
          if(s[x]=='?'){
              s[x]='0';
          }
          else if(s[x]=='1'){
              flag=true;
          }
          zero-=2;
      }
      else if(s[i]=='1'){
          if(s[x]=='?'){
              s[x]='1';
          }
          else if(s[x]=='0'){
              flag=true;
          }
          one-=2;
      }
    }
   
    rep(i,0,n/2){
        if(s[i]=='?'){
            if(zero>0){
                s[i]='0';
                s[n-i-1]='0';
                zero-=2;
            }
            else{
                s[i]='1';
                s[n-i-1]='1';
                one-=2;
            }
        }
    }
    if(n%2==1){
        if(s[n/2]=='?'){
        if(zero>0){
            s[n/2]='0';
            zero--;
        }
        else{
            s[n/2]='1';
            one--;
        }}
        else if(s[n/2]=='0'){
            zero--;
        }
        else{
            one--;
        }
    }
    if(flag){
         cout<<"-1\n";
    }
    else if(zero==0 && one==0){
         cout<<s<<"\n";
    }
    else{
        cout<<"-1\n";
    }

    
  
    
}
}
// ??010?0
// ??010?0