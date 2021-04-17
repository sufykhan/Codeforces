//Ugly numbers are numbers whose only prime factors are 2, 3 or 5. 
//The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included. 
//Given a number n, the task is to find n’th Ugly number.

#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(intl i=a;i<n;i++);
typedef long long intl;

int solve(int a,int b){
    while(a%b==0){
        a=a/b;
    }
    return a;
}
bool isUgly(int t){
    t=solve(t,2);
    t=solve(t,3);
    t=solve(t,5);

    if(t==1) return true;
    return false;
}
int main(){
   int n;cin>>n;int count=1,i=1;

   while(n>count){
       i++;
       if(isUgly(i)){
           count++;
       }
   }
   cout<<i<<"\n";
   
}