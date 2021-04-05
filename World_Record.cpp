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
intl t;
double a,b,c,x,comp=9.58,ans;
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        ans=1.0;
        cin>>a>>b>>c>>x;
        ans=a*b*c*x;
        ans=(double)100/ans;
        ans = floor((ans * 100) + .5) / 100;
        (ans<comp)?cout<<"YES\n":cout<<"NO\n";
        
}
}
