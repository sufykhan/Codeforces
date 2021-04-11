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
   
}
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
    cin>>n>>k;
    intl maxpeak=(n-1)/2;
    if(k>maxpeak){
        cout<<"-1\n";
    }
    else{
        for(int i=1;i<=k;i++){
            cout<<i<<" "<<i+k+1<<" ";
        }
        cout<<k+1<<" ";
        for(int i=2*k+2;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
}
