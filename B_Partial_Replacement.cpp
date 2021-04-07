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
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        cin>>n>>k;
        string s;cin>>s;
        intl count1=0;intl ans=0,pos;
        intl total=count(s.begin(),s.end(),'*');
        rep(i,0,n){
            if(s[i]=='*'){
                pos=i;break;
            }
        }
        vi v;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='*'){
                v.pb(i);
                break;
            }
        }
        //cout<<s<<"\n";
        intl pointto;
        v.pb(pos);
        rep(i,pos+1,n){
            intl flag=0;
            rep(j,0,k){
                if( (i+j)<n && s[i+j]=='*'){
                    pointto=j;
                    flag=1;
                }
            }
            if(flag==1) v.pb(pointto+i);
            ans++;
            i=i+pointto;
        }
        //print(v);
        set<intl>ss;
        rep(i,0,v.size()){
            ss.insert(v[i]);
        }
        cout<<ss.size()<<"\n";
}
}
