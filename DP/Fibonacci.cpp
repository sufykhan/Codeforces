#include <bits/stdc++.h>

using namespace std;

int fib(int n,int memo[]){
    if(memo[n]>0) return memo[n];
    if(n==1 || n==2) return memo[n]=1;
    if(n<=0) return 0;
    memo[n]=fib(n-1,memo)+fib(n-2,memo);
    return memo[n];
}
int main()
{
    int n;cin>>n;
    int memo[n+1]={0};
    cout<<fib(n,memo)<<"\n";
    
    int dp[n+1]={0};
    dp[1]=1;dp[2]=1;
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n]<<"\n";
}