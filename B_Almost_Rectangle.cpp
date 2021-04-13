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
    cin>>n;
    char arr[n][n];vector<pair<intl,intl>>v;
    rep(i,0,n){
        string s;cin>>s;
        rep(j,0,n){
            arr[i][j]=s[j];
            if(s[j]=='*'){
                v.pb(mp(i,j));
            }
            //cout<<arr[i][j]<<"";
        }
        //cout<<"\n";
    }
    if(v[0].F!=v[1].F && v[0].S!=v[1].S){
        v.pb(mp(v[0].F,v[1].S));
        v.pb(mp(v[1].F,v[0].S));
        arr[v[0].F][v[1].S]='*';
        arr[v[1].F][v[0].S]='*';
    }
    else if(v[0].F==v[1].F){
        if(v[0].F+1<n){
            v.pb(mp(v[0].F+1,v[0].S));
            v.pb(mp(v[1].F+1,v[1].S));
            arr[v[0].F+1][v[0].S]='*';
            arr[v[1].F+1][v[1].S]='*';
        }
        else{
             v.pb(mp(v[0].F-1,v[0].S));
            v.pb(mp(v[1].F-1,v[1].S));
            arr[v[0].F-1][v[0].S]='*';
            arr[v[1].F-1][v[1].S]='*';
        }
    }
    else if(v[0].S==v[1].S){
        if(v[0].S+1<n){
            v.pb(mp(v[0].F,v[0].S+1));
            v.pb(mp(v[1].F,v[1].S+1));
            arr[v[0].F][v[0].S+1]='*';
            arr[v[1].F][v[1].S+1]='*';
        }
        else{
             v.pb(mp(v[0].F,v[0].S-1));
             v.pb(mp(v[1].F,v[1].S-1));
             arr[v[0].F][v[0].S-1]='*';
            arr[v[1].F][v[1].S-1]='*';
        }
    }

    rep(i,0,n){
        rep(j,0,n){
            cout<<arr[i][j]<<"";
        }
        cout<<"\n";
    }
}

int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        solve();
}
}
