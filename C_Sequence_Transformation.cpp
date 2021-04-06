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


void solve(vector<intl>v,intl n)
{
    vector<intl>arr;
    rep(i,0,n){
        if(v[i]!=v[i+1]){
            arr.push_back(v[i]);
        }
    }
    map<intl,intl>m;
    rep(i,0,arr.size()){
        if(m.find(arr[i])==m.end()){
            m[arr[i]]=1;
        }
        else{
            m[arr[i]]++;
        }
    }
    intl ans=INT_MAX;
    for(auto&x:m){
        if(arr[0]==x.first && arr.back()==x.first){
            ans=min(ans,x.second-1);
        }
        else if(arr[0]==x.first || arr.back()==x.first){
            ans=min(ans,x.second);
        }
        else{
            ans=min(ans,x.second+1);
        }
        //cout<<x.first<<" "<<x.second<<"\n";
    }
    cout<<ans<<"\n";
}

int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        cin>>n;
        vector<intl>v(n+1);
        rep(i,0,n){
            cin>>v[i];
        }
        v[n]=-1;
        solve(v,n);
}
}
