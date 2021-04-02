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
intl t,n,mm,x,ans;
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        cin>>n>>mm;
        map<intl,intl>m;
        ans=0;
        rep(i,0,n){
            cin>>x;
            x=x%mm;
            if(m.find(x)==m.end()){
                m[x]=1;
            }
            else{
                m[x]++;
            }
        }
        // for(auto &itr:m){
        //     cout<<itr.F<<"-->"<<m[itr.F]<<"\n";
        // }
        for(auto &itr:m){
            if(itr.first==0 || 2*(itr.first)==mm){
                ans++;
            }
            else if(2*itr.first < mm || m.find(mm-itr.first)==m.end()){
                intl a=m[itr.F];
                intl b=m[mm-itr.F];
                ans+=1+max(1LL*0,abs(a-b)-1);
            }
            //cout<<ans<<" ";
        }
        cout<<ans<<"\n";
}
}
