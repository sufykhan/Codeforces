#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
#define rep(i,a,n) for(intl i=a;i<n;i++)


void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
    FASTIO();
   intl t;cin>>t;
   cout<<t<<" ";
   while(t!=1){
       t%2==0?t=t/2:t=t*3+1;
       cout<<t<<" ";
   }
}