#pragma GCC optimize("O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimization("unroll-loops")

#include "bits/stdc++.h"
using namespace std;


void solve()
{
   int n;cin>>n;
   vector<double>pi(n+1);
   vector<double>qi(n+2);
   for(int i=1;i<=n;i++) cin>>pi[i];
   for(int i=0;i<=n;i++) cin>>qi[i];

   double e[n+2][n+1];
   double w[n+2][n+1];
   double root[n+1][n+1];

   for(int i=1;i<=n+1;i++){
       e[i][i-1]=qi[i-1];
       w[i][i-1]=qi[i-1];
   }
   for(int l=1;l<=n+1;l++){
       for(int i=1;i<=n-l+1;i++){
           int j=i+l-1;
           e[i][j]=DBL_MAX;
           w[i][j]=w[i][j-1]+pi[j]+qi[j];
           for(int r=i;r<=j;r++){
              double t=e[i][r-1]+e[r+1][j]+w[i][j];
              if(t<e[i][j]){
                  e[i][j]=t;
                  root[i][j]=r;
              }
           }
       }
   }
   for(int i=1;i<=n+1;i++){
       for(int j=i-1;j<=n;j++){
              cout<<e[i][j]<<"   ";
       }
       cout<<"\n";
   }
}
int main()
{
    solve();
}