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
intl t,n,m;
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        cin>>n;
        vi r(n);
        vi prer;
        vi preb;
        intl r1=0,b1=0;
        rep(i,0,n){
         cin>>r[i];
         r1+=r[i];
         prer.push_back(r1);
        }
        cin>>m;
        vi b(m);
        rep(i,0,m){
         cin>>b[i];
         b1+=b[i];
         preb.push_back(b1);
        }
        print(prer);
        print(preb);
}
}
