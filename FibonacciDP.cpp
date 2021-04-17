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

intl solveRecursive(intl n){
  if(n<=1) {return n;}
  return solveRecursive(n-1)+solveRecursive(n-2); 
}
intl solveDP(intl n){
intl arr[n+1];arr[0]=1;arr[1]=1;
rep(i,2,n+1){
    arr[i]=arr[i-1]+arr[i-2];
}
return arr[n-1];
}

void solve(){
   cin>>n;
   cout<<solveDP(n)<<"<-->";
   cout<<solveRecursive(n)<<"\n";
}
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        solve();
}
}
