#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
#define rep(i,a,n) for(int i=a;i<n;i++)

int main(){
    intl t;cin>>t;
    rep(i,0,t){
        intl a,b;cin>>a>>b;
        if(b==1) {cout<<"NO\n";}
        else{
        cout<<"YES\n";
        cout<<a<<" "<<a*b<<" "<<a*(b+1)<<"\n";
        }
    }
}