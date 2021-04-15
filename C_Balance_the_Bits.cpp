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

void solve(string s,intl n){
    intl a=0,b=0;
    rep(i,0,n){
        if(s[i]=='0'){a+=1;}
        else{b+=1;}
    }

    if(a%2==1||b%2==1||s[0]=='0'||s[n-1]=='0'){
        cout<<"NO\n";
        return;
    }
    string s1="",s2="";
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(b){
                s1+=(char)('(');
                s2+=(char)('(');
                   b-=2;
            }
            else{
                s1+=(char)(')');
                s2+=(char)(')');
            }
         
        }
        else{
           if(a%2==0){
               s1+=(char)('(');
               s2+=(char)(')');
           } 
           else{
               s1+=(char)(')');
               s2+=(char)('(');
           }
           a--;
        }
    }
    cout<<"YES\n";
    cout<<s1<<"\n";
    cout<<s2<<"\n";

}
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        string s;cin>>n>>s;
        
        solve(s,n);
}
}


//combination of palindrome of even length





