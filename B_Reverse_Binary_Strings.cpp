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
intl solve(string s){
    intl ans=0;
    rep(i,0,s.length()-1){
        if(s[i]==s[i+1] && s[i]=='0'){
            ans++;
        }
    }
    return ans;
}
intl t,n;
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        cin>>n;
        string s,s1,s2;cin>>s;
        s1='0'+s+'1';
        s2='1'+s+'0';
        cout<<min(solve(s1),solve(s2))<<"\n";
}
}
