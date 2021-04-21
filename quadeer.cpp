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
string s;
int main(){
    FASTIO();
    cin>>t>>s;
    map<char,intl>mp;
    rep(i,0,s.length()){
        mp[s[i]]++;
    }
    vector<char> onecount;
    vector<char>twocount;
    for(auto &x:mp){
        //cout<<x.first<<" "<<x.second<<"\n";
        if(x.second>0){
            onecount.pb(x.first);
        }
        if(x.second>1){
            twocount.pb(x.first);
        }
    }
intl ans=0;
    rep(i,0,twocount.size()){
        rep(j,0,onecount.size()){
            if((onecount[j]==twocount[i] && mp[onecount[j]]>2) || onecount[j]!=twocount[i]){
            ans++;
            }
           
        }
    }
    cout<<ans<<"\n";
    rep(i,0,twocount.size()){
        rep(j,0,onecount.size()){
            if((onecount[j]==twocount[i] && mp[onecount[j]]>2) || onecount[j]!=twocount[i]){
             cout<<twocount[i]<<onecount[j]<<twocount[i]<<"\n";
            }
           
        }
    }
}
