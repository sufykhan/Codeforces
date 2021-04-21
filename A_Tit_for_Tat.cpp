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
intl t,n,k;

void solve(){
    cin>>n>>k;vi v(n);intl sufy=0;
    rep(i,0,n){
        cin>>v[i];
        if(v[i]>0){
            sufy++;
        }
    }bool flag=false;
    rep(i,0,n-1){
        if(k=0){
            break;
        }
        if(v[i]>0){
            v[i]--;
            v[i+1]++;
            k--;
        }
    }
    print(v);

}
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        solve();
}
}
//286 1:45:13