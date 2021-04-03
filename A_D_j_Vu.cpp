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

bool check(string s){
    intl n=s.length();
    for(intl i=0;i<n/2;i++){
       
        if(s[i]!=s[n-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        string s;cin>>s;
        if(check(s)){
            if(count(s.begin(),s.end(),'a')==s.length()){
                cout<<"NO\n";
            }
            else{
            cout<<"YES\n";
            cout<<s<<"a"<<"\n";
            }
        }
        else{
           
            if(check(string(s+"a"))){
                cout<<"YES\n";
                cout<<"a"<<s<<"\n";
            }
            else{
               cout<<"YES\n";
            cout<<s<<"a"<<"\n";
                
            }
        }
}
}
