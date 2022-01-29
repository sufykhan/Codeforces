#include <bits/stdc++.h>
using namespace std;

//(4 3 2 1 0) (2 0)

#define MAX 200001
bool arr[MAX];

void getVal(vector<long long>&v,long long l,vector<long long>&ans,vector<long long>&maxi,long long n){
    
    if(l<n){
    
    long long cnt=maxi[l]+1;
    for(long long i=0;i<=maxi[l];i++) arr[i]=false;
    long long pos=-1;
    for(long long i=l;i<n;i++){
        if(!arr[v[i]]) {arr[v[i]]=true;cnt--;}
        if(cnt==0){
            ans.push_back(maxi[l]+1);
            pos=i;
            break;
        }
    }
    if(cnt>0 && pos==-1){
        for(long long i=0;i<=maxi[l];i++){
            if(!arr[i]) {ans.push_back(i);break;}
        }
    }
    else{
        getVal(v,pos+1,ans,maxi,n);
    }
    }
}
void solve(){
    long long n;cin>>n;vector<long long>v(n);
    for(long long i=0;i<n;i++) cin>>v[i];

    vector<long long>maxi(n);
    maxi[n-1]=v[n-1];
    for(long long i=n-2;i>=0;i--){
        maxi[i]=max(v[i],maxi[i+1]);
    }
    vector<long long>ans;
    getVal(v,0,ans,maxi,n);
    cout<<ans.size()<<"\n";
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<"\n";
    
}
int main(){
    long long t;cin>>t;
    while(t--){
        solve();
    }
}