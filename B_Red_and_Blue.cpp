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
intl t,n,m;
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        cin>>n;
        vi r(n);
        rep(i,0,n){
         cin>>r[i];
        }
        cin>>m;
        vi b(m);
        rep(i,0,m){
         cin>>b[i];
        }
        partial_sum(r.begin(), r.end(), r.begin());
	    partial_sum(b.begin(), b.end(), b.begin());
        cout<<max(1LL*0,*max_element(r.begin(),r.end()))+max(1LL*0,*max_element(b.begin(),b.end()))<<"\n";
        // print(prer);
        // print(preb);
}
}
