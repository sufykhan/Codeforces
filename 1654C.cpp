#include "bits/stdc++.h"
using namespace std;

bool val;
void recur(long long sum,map<long long,int>&mp){
    if(mp.count(sum) && mp[sum]>0){
        mp[sum]--;
        return ;
    }
    if(!val){ 
        return;
    }
    if(sum==1){
        val=false;
        return;
    }
    recur(sum>>1,mp);
    recur(sum-(sum>>1),mp);
}

void solve(){
    //mp.clear();
    map<long long,int>mp;
    val=true;
    int n;cin>>n;
    vector<long long>arr(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
        sum+=arr[i];
    }
    recur(sum,mp);
    if(val){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
}
int main(){

    int t;cin>>t;
    while(t--){
        solve();
    }
}
