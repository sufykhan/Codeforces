#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;cin>>s;
    int n=s.length();
    string ans="";int flag=0,pos=-1;string change;
    for(int i=n-2;i>=0;i--){
        int one=s[i]-'0';
        int two=s[i+1]-'0';
        if(one+two>=10) {
            flag=1;
            stringstream ss;
            ss << (one+two);
            change=ss.str();
            pos=i;
        }
    }
    if(flag==0) {
        pos=0;
        int x=s[0]-'0';
        x+=s[1]-'0';
        stringstream ss;
        ss << (x);
        change=ss.str();
    }
    for(int i=0;i<n;i++){
        if(i==pos){
           cout<<change;i++;
        }else{
        cout<<s[i];
        }
    }
    cout<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}