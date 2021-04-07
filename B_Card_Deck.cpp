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


intl t,n;
int main(){
    FASTIO();
    cin>>t;
    rep(dii,0,t){
        cin>>n;
        vi v(n+1);
        vi v1(n+1);
        rep(i,0,n){
            intl cc;
            cin>>cc;
            v[cc]=i+1;
            v1[i+1]=cc;
        }
        //print(v);
        intl cur=n;
        for(intl i=n;i>=1;i--){
            for(intl j=v[i];j<=cur;j++){
                cout<<v1[j]<<" ";
            }
            cur=min(cur,v[i]-1);
        }
        cout<<"\n";
}

}
