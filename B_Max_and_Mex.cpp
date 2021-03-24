#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;
intl t,n,k,x;
int main(){
  cin>>t;
  rep(ii,0,t){
    cin>>n>>k;
    vector<intl>v(n);
    set<intl>s;
    rep(i,0,n){
        cin>>v[i];
        s.insert(v[i]);
    }
   
    sort(v.begin(),v.end());
    intl c=0;
    rep(i,0,n){
        if(v[i]==c){
            c++;
        }
    }
    intl flag=0;
    intl comp=(v[n-1]+c+1)/2;
    //cout<<comp<<"  "<<c<<" <-> "<<v[n-1]<<"\n";
    if(k!=0 && comp-1!=v[n-1]) s.insert(comp);
    if(comp-1==v[n-1]){
        flag+=k;
    }
   cout<<s.size()+flag<<endl;
  }
}