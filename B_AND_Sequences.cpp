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
intl mod=1e9+7;
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        cin>>n;vi v(n);
        rep(i,0,n){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        //print(v);
        intl comp=v[0];bool flag=true;
        rep(i,1,n){
          if((comp&v[i])!=comp){
              flag=false;
          }
        }
        if(flag){
           intl cnt=0;intl ans=1;
           rep(i,0,n){
               if(v[i]==v[0]){
                   cnt++;
               }
               if(i+1<=n-2){
                   ans=((i+1)*1LL*ans)%mod;
               }
           }
           intl y=(cnt*1LL*(cnt-1))%mod;
           ans=(ans*1LL*y)%mod;
           cout<<ans<<"\n";
        }
        else{
            cout<<"0\n";
        }
        
}
}