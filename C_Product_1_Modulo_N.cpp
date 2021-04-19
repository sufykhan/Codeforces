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

intl M=1e9+6;
intl t,n;
int main(){
    FASTIO();
    cin>>n;vi v;intl ans=1;
    rep(i,1,n){
       if(__gcd(i,n)==1) {v.pb(i);ans=(ans*i)%n;}
    }
    cout<<v.size()-(ans!=1)<<"\n";
    rep(i,0,v.size()){
        if(ans==v[i] && v[i]!=1){

        }
        else{
            cout<<v[i]<<" ";
        }
    }
    cout<<"\n";
}


//1 (2) 3 (4) 5 (6) 7 -->8  (Coprimes are included)
