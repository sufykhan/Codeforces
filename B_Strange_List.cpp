//  4 6 8 2 <->2 3 4 1 <->1 / 
//  2 1 3 1
//  (min(2 1 3 1)+1)*(4+6+8+2) + pos of min
//  8 16 4 12 <->4 8 2 6<->2 4 1 3<->1 2 \
//  3 4 2 2

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

intl getQ(intl target,intl val){
    intl expo=0;  
    while(target%val==0){
        target=target/val;
        expo++;
    }
    return expo;
}
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        cin>>n>>k;
        vi v(n);intl sumo=0,sumo1=0;vi v1(n);
        rep(i,0,n){
            cin>>v[i];
            sumo+=v[i];
            v1[i]=getQ(v[i],k);
        }
        intl mini=*min_element(v1.begin(),v1.end());
        
        rep(i,0,n){
            
            if(v1[i]==mini){
                break;
            }
            else{
                sumo1+=v[i];
            }
        }
        cout<<(1+mini)*sumo+sumo1<<"\n";
}
}