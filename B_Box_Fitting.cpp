#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;
intl t,n,k,ans=0,wid,checi=0;
intl arr[(int)1e6+6];

bool search(vector<intl>v,intl n1,intl val,vector<bool>&visited)
{
    intl l=0,r=n1-1;
    intl mid,comp;
    while(r>=l){
         mid=l+(r-l)/2;
         comp=v[mid];
        if(comp==val){
            if(!visited[mid])
            {
            visited[mid]=true;
            return true;
            }
            else{
            l++;
            }
        }
        else if(comp>val){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return false;
    
}

bool chec(vector<bool>visited){
    rep(i,0,n){
        if(!visited[i]){
            return true;
        }
    }
    return false;
}

int main(){
  cin>>t;
  rep(ii,0,t){
      ans=0;
      cin>>n>>k;
      vector<intl>v(n);
      vector<bool>visited(n,false);
      rep(i,0,n){
          cin>>v[i];
      }
      sort(v.begin(),v.end());
      rep(i,0,n){
          checi=0;
          wid=k;
          intl k1=k;
          ans++;
          while(wid>0){
              if(search(v,n,wid,visited)){
                 
                  k1=k1-wid;
                  //cout<<wid<<"\n";
                  wid=k1;
                  
              }
              else{
                  wid--;
              }
          }
      
       rep(i,0,n){
              cout<<v[i]<<" ,";
          }
      cout<<"\n";
          rep(i,0,n){
              cout<<visited[i]<<" ,";
              if(visited[i]){
                  checi++;
              }

          }
           if(checi==n){
               break;
           }

      }
 cout<<ans<<"\n";

     
  }
}