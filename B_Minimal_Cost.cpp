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
intl t,n,up,side,x,y;
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        intl sumo=INT_MAX;
        cin>>n>>up>>side;
        rep(i,0,n){
            cin>>x;
            if(i!=0){
                if(abs(y-x)==0){
                    sumo=min(sumo,side+min(up,side));
                }
                if(abs(y-x)>1){
                    sumo=0;
                }
                if(abs(y-x)==1){
                    sumo=min(sumo,min(up,side));
                }
               
            }
                y=x;
        }
        cout<<sumo<<"\n";
}
}
