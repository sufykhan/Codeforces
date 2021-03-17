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

bool sortbySec(pair<intl,intl>&a,pair<intl,intl>&b){
    return (a.second>b.second);
}
intl t,n;
int main(){
    FASTIO();
    cin>>t;
    rep(x,0,t){
     cin>>n;vi v(n);intl comp=0,comp1=0;
     rep(i,0,n){
         cin>>v[i];
         comp+=v[i];
         if(i%2==0){
             comp1+=v[i];
         }
     }
     if(comp>=2*comp1){
         rep(i,0,n){
             if(i%2==0){
                 cout<<"1 ";
             }
             else{
                 cout<<v[i]<<" ";
             }
         }
     }
     else{
         rep(i,0,n){
             if(i%2==1){
                 cout<<"1 ";
             }
             else{
                 cout<<v[i]<<" ";
             }
         }
     }
     cout<<"\n";  
    }

}
