// Best Question
#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;

void solve(vector<intl>arr,intl n){
   set<int>s;
   
    rep(ii,0,2){
         stack<int>q;
    rep(i,0,n){
        while(!q.empty() && q.top()<=arr[i])
        {
            s.insert(arr[i]-q.top());
            q.pop();
        }
        q.push(arr[i]);
    }
    reverse(arr.begin(),arr.end());
    }
    cout<<s.size()<<"\n";
}

int main(){
   intl t;cin>>t;
   rep(ii,0,t){
      intl n;cin>>n;vector<intl>arr(n);
      rep(i,0,n){
          cin>>arr[i];
      }
      solve(arr,n);
   }
}