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

void solve(){
    cin>>n;string s;cin>>s;intl tc=0,mc=0;  vi m1;vi t1;
    rep(i,0,n){
        if(s[i]==(char)('M')){
            m1.pb(i);
            mc++;        
        }else {tc++;t1.pb(i);}
    }
    if(tc!=2*mc) {
        cout<<"NO\n";return;
    }
    rep(i,0,mc){
        if(m1[i]<t1[i] ||t1[i+m1.size()]<m1[i]){
            cout<<"NO\n";return;
        }
    }
    cout<<"YES\n";return;
   
}
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        solve();
}
}
