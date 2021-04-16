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
        intl x,y;cin>>x>>y;intl ans=0;
        rep(a,1,x+1){
            rep(b,1,y+1){
                if(a/b>=1 && a/b==a%b){
                    ans++;
                   //cout<<a<<" "<<b<<"\n";
                }
            }
        }
       cout<<ans<<"\n";
}
}
