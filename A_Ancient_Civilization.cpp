#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,l;cin>>n>>l;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    long long ans=0;
    vector<int>cnt(l+1,0);
    for(auto x:v){
        int i=0;
        while(x>0){
            if(x&1) cnt[i]++;
            i++;
            x=x>>1;
        }
    }
    for(int i=0;i<l;i++){
        if(cnt[i]>n-cnt[i]){
            ans+=1<<i;
        }
    }
    cout<<ans<<"\n";
    
}
int main()
{
    int t;cin >> t;
    while(t--)
    {
        solve();
    }
}
