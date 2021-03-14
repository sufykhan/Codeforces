// Best Question
#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
#define rep(i,a,n) for(intl i=a;i<n;i++)


void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
bool solve(vector<intl>&v,intl n){
    intl moves=0,flag=0;
    rep(i,1,n+1){
     if(v[i]>i){
         flag=1;
         break;
     }
          moves+=i-v[i];
    
    }
    if(flag==1){
        return false;
    }
    if(moves%2==0){
        return false;
    }

    return true;
    
}
int main(){
    FASTIO();
   intl t;cin>>t;
   rep(ii,0,t){
     intl n;cin>>n;vector<intl>arr(n+1);
     rep(i,1,n+1){
        intl x;cin>>x;
        arr[i]=x;
     }
   sort(arr.begin(),arr.end());
   solve(arr,n)?cout<<"First\n":cout<<"Second\n";
   }
}