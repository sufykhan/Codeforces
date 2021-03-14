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

bool sortbySec(pair<intl,intl>&a,pair<intl,intl>&b){
    return (a.second>b.second);
}
int main(){
    FASTIO();
    intl t;cin>>t;
    vector<intl>m;
    set<intl>pos;
    set<pair<intl,intl>>s;

    rep(x,0,t){
        intl q;cin>>q;
        if(q==1){
            intl x;cin>>x;
            m.pb(x);
            pos.emplace((int)m.size()-1);
            s.emplace(~x,(int)m.size()-1);
        }
        else{
                intl i=(q==2)? *pos.begin():s.begin()->S;
                pos.erase(i);
                s.erase(mp(~m[i],i));
                cout<<i+1<<" ";
        }
        // if(q==1){
        //     intl y;cin>>y;
        //     // ns.pb(y);
        //     // m.pb(mp(ns.size()-1,y));
        // }
        // else if(q==2){
        //     rep(i,0,ns.size()){
        //         if(ns[i]!=-1){
        //             cout<<i+1<<" ";
        //             ns[i]=-1;
        //             break;
        //         }
        //     }
        // }
        // else{
        //    sort(m.begin(),m.end(),sortbySec);
        //    rep(i,0,ns.size()){
        //        if(ns[m[i].F]!=-1){
        //             cout<<m[i].F+1<<" ";
        //             ns[m[i].F]=-1;
        //             break;
        //        }
        //    }
        // }
    }
    cout<<"\n";
}
