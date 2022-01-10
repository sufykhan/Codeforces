#include <bits/stdc++.h>
using namespace std;

int solve(){
       string s;cin>>s;int cnt=0;
       for(int i=0;i<s.size();i++){
           if(s[i]=='1') cnt++;
           if(cnt>0 && s[i]=='0') cnt++;

           if(cnt>=2) return 1;
       }
       return 0;
}

int main(){
    long long n;cin>>n;
    for(int i=0;i<n;i++){
        int ans=solve();
        if(ans==1) cout<<"Yes\n";
        else cout<<"No\n";
    }
}