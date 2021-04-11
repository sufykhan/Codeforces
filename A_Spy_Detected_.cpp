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
int main(){
    FASTIO();
    cin>>t;
        rep(ii,0,t){
        cin>>n;unordered_map<int,int>m;intl comp;vi v(n);
        rep(i,0,n){
            intl x;
            cin>>x;
            v[i]=x;
            if(m.find(x)==m.end()){
                m[x]=1;
            }
            else{
                m[x]++;
            }
        }
        for(auto &x:m){
            if(x.second==1){
                comp=x.first;
                break;
            }
        }
        rep(i,0,n){
            if(comp==v[i]){
                cout<<i+1<<"\n";
            }
        }
}

}
