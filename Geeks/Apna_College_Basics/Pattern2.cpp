/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;cin>>n;
   
   
   int sum=1;
   for(int i=1;i<=n;i++){
       int space=n-i;
       for(int j=0;j<space;j++){
           cout<<" ";
       }
       for(int j=1;j<=sum;j++){
           if(j-i+1>0) cout<< j-i+1<<"";
           else cout<<(sum+1)/2-j+1<<"";
       }
       cout<<"\n";
       sum+=2;
   }
   sum=2*n-1;
   for(int i=1;i<=n;i++){
       int space=i-1;
       for(int j=0;j<space;j++){
           cout<<" ";
       }
       for(int j=1;j<=sum;j++){
           if(j-i+1>0) cout<< j-i+1<<"";
           else cout<<(sum+1)/2-j+1<<"";
       }
       cout<<"\n";
       sum-=2;
   }
   
   
   
   
   
   for(int i=1;i<=n;i++){
      for(int j=1;j<=2*n;j++){
          if(i+j>n && 2*n-j<i){
              cout<<-1*(2*n-j-i)<<" ";
          }
          else{
              cout<<" ";
          }
      }
      cout<<"\n";
   }
}
