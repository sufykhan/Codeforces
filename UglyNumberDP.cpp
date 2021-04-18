//Ugly numbers are numbers whose only prime factors are 2, 3 or 5.
//The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included.
//Given a number n, the task is to find n’th Ugly number.

#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, n)             \
    for (intl i = a; i < n; i++) \
        ;
typedef long long intl;

int solve(int a, int b)
{
    while (a % b == 0)
    {
        a = a / b;
    }
    return a;
}
bool isUgly(int t)
{
    t = solve(t, 2);
    t = solve(t, 3);
    t = solve(t, 5);

    if (t == 1)
        return true;
    return false;
}
// int main(){
//    int n;cin>>n;int count=1,i=1;

//    while(n>count){
//        i++;
//        if(isUgly(i)){
//            count++;
//        }
//    }
//    cout<<i<<"\n";

// }

int main()
{
    int n;
    cin >> n;
    int i2 = 0, i3 = 0, i5 = 0;
    int dp[n];
    dp[0] = 1;
    int t2 = dp[i2] * 2;
    int t3 = dp[i3] * 3;
    int t5 = dp[i5] * 5;
    for (int i = 1; i < n; i++)
    {
        dp[i] = min(t2,min(t3, t5));
        if(dp[i]==t2){
            i2+=1;
            t2=dp[i2]*2;
        }
        if(dp[i]==t3){
            i3+=1;
            t3=dp[i3]*3;
        }
        if(dp[i]==t5){
            i5+=1;
            t5=dp[i5]*5;
        }
    }
    cout<<dp[n-1]<<"\n";
}