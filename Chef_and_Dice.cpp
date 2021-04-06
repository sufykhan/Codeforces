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
intl arr[4]={20,36,51,60}; 
intl arr2[4]={16,32,44,55};
intl solve(intl n){
   if(n/4==0){
       return arr[n-1];
   }
   else{
       if(n%4==0) return 44*1LL*(n/4)+16;
       return (44*1LL*(n/4)+arr[n%4-1]+4*(4-n%4));
  } 
}
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        cin>>n;
        cout<<solve(n)<<"\n";
}
}
