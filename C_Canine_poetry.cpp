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
int main(){
    FASTIO();
    intl t;cin>>t;
    rep(x,0,t){
        string s;cin>>s;
        vector<intl>v(s.size(),0);intl ans=0;
        rep(i,1,s.size()){
            intl flag=0;
            if(s[i]==s[i-1] && v[i-1]==0){
                flag=1;
            }
            if(i>1&&s[i]==s[i-2] && v[i-2]==0){
                flag=1;
            }
            v[i]=flag;
            ans+=flag;

        }
        cout<<ans<<"\n";
    }
}
