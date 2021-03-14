#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;

void solve(vector<intl>v,intl n,intl pref[]){
  intl ans=INT_MAX;
  rep(i,0,n){
      intl u_b=(upper_bound(v.begin(),v.end(),v[i])-v.begin()-1);
      intl l_b=(lower_bound(v.begin(),v.end(),v[i])-v.begin());
      //cout<<v[i]<<" ub-->"<<u_b<<" lb-->"<<l_b<<endl;
      intl comp=pref[n-1]-pref[u_b]-(v[i]*(n-u_b)) + pref[l_b];
      ans=min(ans,comp);
      
  }
  cout<<ans<<"\n";
}
int main(){
    intl t;cin>>t;
    rep(ii,0,t){
        intl n;cin>>n;
        map<intl,intl>map1;intl prefsum[n]={0};
        rep(i,0,n){
        intl x;cin>>x;
        if(map1.count(x)>0){
            map1[x]+=1;
        }
        else{
             map1.insert(make_pair(x,1));
        }
        }
        vector<intl>v;
        for(auto& t:map1){
            v.push_back(t.second);
        }
        sort(v.begin(),v.end());
        intl xxx=v.size();
        intl pref[xxx]={0};
        pref[0]=v[0];
        rep(j,1,xxx){
            pref[j]=pref[j-1]+v[j];
        }
        solve(v,xxx,pref);
    }
}