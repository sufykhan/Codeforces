#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        set<int>s;
        for(int j=0;j<n;j++){
            int x;cin>>x;
            s.insert(x);
        }
        int ans=0;
        while(!s.empty()){
            int target=*s.rbegin();
            s.erase(target);
            if(target%2==0){
                ans++;
                s.insert(target/2);
            }
        }
        cout<<ans<<"\n";
    }
}