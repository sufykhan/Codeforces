#include <bits/stdc++.h>
using namespace std;


int check(vector<int>v,int x){
    vector<int>b(v.size(),0);
   for(int i=v.size()-1;i>=2;i--){
      // cout<<v[i]<<"<->";
       
       if(v[i]+b[i]-x<0) return 0;
       int d=min(v[i],(v[i]+b[i]-x));
  
       b[i-1]+=(d/3);
      
       b[i-2]+=2*(d/3);
       

       //cout<<v[i]<<" ";
   }
   //cout<<v[1]<<" "<<v[0]<<"\n";
   if(v[0]+b[0]>=x && v[1]+b[1]>=x) return 1;
   return 0;
}
void solve(){
    int n;cin>>n;vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=*min_element(v.begin(),v.end());int r=1e9;int mid=0;
    //cout<<check(v,15)<<"\n";
 int ans;
    while(r>=l){
        mid=l+(r-l)/2;
        int comp=check(v,mid);
        if(comp==1){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<"\n";

}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}