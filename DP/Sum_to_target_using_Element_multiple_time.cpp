#include <bits/stdc++.h>

using namespace std;
//By using array element any number of time , can i sum to Target Sum


bool isSum(int n,int target,vector<int>v,int memo[]){
    
    if(memo[target]!=-1) return memo[target]==1;
    if(target==0) return true;
    if(target<0) return false;
    
    for(int i=0;i<n;i++){
        int remain=target-v[i];
        
        if(isSum(n,remain,v,memo)){
            memo[target]=1;
            return true;
        }
    }
    memo[target]=0;
    return false;
}
int main()
{
    int n,target;cin>>n>>target;
    vector<int>v(n);
    int memo[target+1];
    for(int i=0;i<target+1;i++) memo[i]=-1;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(isSum(n,target,v,memo)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}