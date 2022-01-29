#include <bits/stdc++.h>

using namespace std;
//By using array element any number of time , can i sum to Target Sum and find total combinations

void calSum(int n,int target,vector<int>v,vector<vector<int>>&ans,vector<int>res,int xx){
    
    if(target==0) {ans.push_back(res);return;}
    if(target<0) return;
    
    for(int i=xx;i<n;i++){
        res.push_back(v[i]);
        int remain=target-v[i];
        calSum(n,remain,v,ans,res,xx);
        xx++;
        res.pop_back();
    }
    
  
}
int main()
{
    int n,target;cin>>n>>target;
    vector<int>v(n);
 
   
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<int>>ans;
    vector<int>res;
    calSum(n,target,v,ans,res,0);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<"\n";
    }
}
