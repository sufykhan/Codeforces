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
intl t,n,k;

void solve(){
    cin>>n>>k;vi v(n);
    rep(i,0,n){
        cin>>v[i];
    }
    intl index=0;
    while(index<n-1 && k>0){
       if(v[index]>0){
           v[index]--;
           v[n-1]++;
           k--;
       }
       else{
           index++;
       }
    }
    print(v);

}
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        solve();
}
}
//286 1:45:13