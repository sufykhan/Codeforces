#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(intl i=a;i<n;i++)
typedef long long intl;
intl t,n,x;
int main(){
  cin>>t;
  rep(ii,0,t){
      cin>>n;
      vector<intl>v;
      map<intl,intl>m;
      rep(i,0,n){
          cin>>x;
          v.push_back(x);
      }
      rep(i,0,n){
          if (m.find(v[i]) == m.end()) {
            m[v[i]] = 1;
        }
        else {
            m[v[i]]++;
        }
      }
      intl arr[m.size()]={0},g=0;
      for(auto& itr:m){
          //cout<<"value-->"<<itr.second<<endl;
         arr[g]=itr.second;
          //cout<<arr[g]<<" ,";
          g++;
      }
    //   rep(i,0,m.size()){
    //       cout<<arr[i]<<" ,";
    //   }
       map<intl,intl>m1;
       rep(i,0,m.size()){
          if (m1.find(arr[i]) == m1.end()) {
            m1[arr[i]] = 1;
        }
        else {
            m1[arr[i]]++;
        }
      }
      intl arr1[m.size()+1]={0},g1=0;
      for(auto& itr:m1){
          //cout<<"value-->"<<itr.second<<endl;
          if(itr.second==1){
              
              arr1[g1]=itr.first;
              //cout<<arr1[g1]<<"()";
              g1++;
          }
          //cout<<arr[g]<<" ,";
      }
      intl sum=0;
      for(intl i=1;i<g1;i++){
          sum+=arr[i];
        //   arr[i+1]=arr[i]-arr[i-1];
         // arr1[i-1]=arr1[i]-arr1[i-1];
      }
      if(g1==0){
          cout<<"0\n";
      }
      else{
          cout<<arr[0]-sum<<endl;
      }
      //cout<<endl;
    //   cout<<arr[g1-2]<<"\n";
    //cout<<arr1[0]<<endl;
  }
}