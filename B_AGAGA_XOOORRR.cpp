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

bool answer(vector<intl>v,intl n){
    intl cnt=0;
    rep(i,0,n){
        if(v[i]==v[0]){
    cnt++;
        }
    }
    if(cnt==n){
        return true;
    }
    intl comp1=0,comp2=0;bool flag=false;
    rep(i,0,n-1){
        comp1=0,comp2=0;
        for(intl j=0;j<=i;j++)
        {
            comp1=comp1^v[j];
        }
        for(intl j=i+1;j<n;j++)
        {
            comp2=comp2^v[j];
            if(comp2==comp1 && j!=n-1){
                comp2=0;
            }
        }
        if(comp1==comp2 ){
            return true;
        }
    }
    return false;
}


void solve(){
    cin>>n;vi v(n);
    rep(i,0,n){
        cin>>v[i];
    }
    
    if(answer(v,n)) cout<<"YES\n";
    else{
        reverse(v.begin(),v.end());
        if(answer(v,n)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        solve();
}

}
//896 1:33:33