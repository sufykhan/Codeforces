#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //sort(v.begin(),v.end());
    set<int>s;
    for(int i=0;i<n;i++)
    {
        while(v[i]>0 ){
        if(v[i]<=n && s.find(v[i])==s.end()) {s.insert(v[i]);break;}
        v[i]=v[i]>>1; 
        }
        
    }
    int k=0;
    for(auto x:s){
        //cout<<x<<" ";
        k++;
        if(x!=k)
        {
            cout<<"NO\n";
            return;
        }

    }
    if(k!=n) cout<<"NO\n";
    else cout<<"YES\n";
}
    
int main()
{
    
    int t;cin >> t;
    while(t--)
    {
        solve();
    }
}
