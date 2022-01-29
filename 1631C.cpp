#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int t;cin>>t;
   while(t--){
       int n,k;cin>>n>>k;
       if(k==3 && n==4){cout<<"-1\n";continue;}
       int comp=(n-1)^k;
       if(k!=n-1 && k!=0){
           cout<<0<<" "<<comp<<"\n";
           cout<<n-1<<" "<<k<<"\n";
           for(int i=1;i<n/2;i++){
               int c=i^(n-1);
               if(!(i==k || i==comp)) cout<<i<<" "<<c<<"\n";
           }
       }
       else if(k==0){
           for(int i=0;i<n/2;i++){
               int c=i^(n-1);
               cout<<i<<" "<<c<<"\n";
           }
       }
       else{
       cout<<0<<" "<<n-4<<"\n";       
       cout<<1<<" "<<3<<"\n";
       cout<<2<<" "<<n-3<<"\n";
       cout<<n-1<<" "<<n-2<<"\n";
       
       for(int i=4;i<n/2;i++){
           int c=i^(n-1);
            cout<<i<<" "<<c<<"\n";
       }
       }
   }
}