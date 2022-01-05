/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;vector<vector<int>>v(n,vector<int>(3));
    int mini=0,maxi=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>v[i][j];
           // cout<<v[i][j]<<" ";
        }
       // cout<<"\n";
        
        if(v[i][0]<=v[mini][0]) {
            if(v[mini][0]==v[i][0])
            {
                 if(v[maxi][1]==v[i][1]){
                     if(v[maxi][2]+v[mini][2]>v[i][2]){
                         maxi=i;mini=i;
                     }
                 }
                 else if(v[mini][2]>v[i][2]){
                     if(mini==maxi ){
                         if(v[maxi][1]<v[i][1]){
                             mini=i;maxi=i;
                         }
                     }
                     else{
                        mini=i;   
                     }
                        
                 }
            }
            else{
                mini=i;
                if(v[maxi][1]==v[i][1]){
                  maxi=i;
              }
            }
            
        }
        if(v[i][1]>=v[maxi][1])
        { 
          if(v[maxi][1]==v[i][1]){
              
              if(v[mini][0]==v[i][0]){
                   if(v[maxi][2]+v[mini][2]>v[i][2]){
                         maxi=i;mini=i;
                    }
              }
              else if(v[maxi][2]>v[i][2] ){
                  if(mini==maxi){
                      if(v[mini][0]>v[i][0]){
                          maxi=i;
                      }
                  }
                  else{
                        maxi=i;
                      
                  }
              }
          }  
          else {
              maxi=i;
              if(v[mini][0]==v[i][0]){
                  mini=i;
              }
          }
        }
        
        if(mini!=maxi){
            cout<<v[maxi][2]+v[mini][2]<<"\n";
        }
        else{
            cout<<v[maxi][2]<<"\n";
        }
        
    }
    
    
}

int main()
{
    int t;cin>>t;
    for(int i1=0;i1<t;i1++){
        int n;cin>>n;vector<int>l(n),r(n);vector<long long>c(n);
        for(int i=0;i<n;i++){
            cin>>l[i]>>r[i]>>c[i];
        }
        long long minl=INT_MAX,maxl=INT_MAX,L=INT_MAX,R=-1,total=INT_MAX;
        for(int i=0;i<n;i++){
            if(l[i]<L){
                minl=INT_MAX;
                total=INT_MAX;
                L=l[i];
            }
            if(r[i]>R){
                maxl=INT_MAX;
                total=INT_MAX;
                R=r[i];
            }
            if(L==l[i]){
                minl=min(minl,c[i]);
            }
            if(R==r[i]){
                maxl=min(maxl,c[i]);
            }
            if(L==l[i]&&R==r[i]){
                total=min(total,c[i]);
            }
            cout<<min(total,maxl+minl)<<"\n";

        }
    }
}
