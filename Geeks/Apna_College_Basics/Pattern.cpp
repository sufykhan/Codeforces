#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;cin>>n;
   for(int i=1;i<=2*n;i++){
       for(int j=1;j<=2*n;j++){
           if(i<n){
                if(j<=i && j<=n){
                   cout<<"*";
                }
                else if(j>n&& 2*n-j<i){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
           }
           else{
                if(i<=j && j>n){ 
                    cout<<"*";
                }
                else if(j-1<=2*n-i && j<=n){
                        cout<<"*";
                }
                else{
                    cout<<" ";
                }
           }
           
       }
       cout<<"\n";
   }
}

