#include <bits/stdc++.h>
using namespace std;

bool sortbySec(pair<int, int> &a, pair<int, int> &b)
{
    return (a.first > b.first);
}

void solve(){
    int n;cin>>n;vector<int>v(n);
        for(int j=0;j<n;j++){
            cin>>v[j];
        }
        for(int j=1;j<n;j++){
            if(abs(v[j]-v[j-1])>=2){
                cout<<"YES\n";
                cout<<j<<" "<<j+1<<"\n";
                return;
            }
        }
        cout<<"NO\n";
        return;
}

int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
}