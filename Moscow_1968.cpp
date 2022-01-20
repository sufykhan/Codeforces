#include <bits/stdc++.h>
using namespace std;
 
const int Mod = 1e9 + 7;

int countFact(int n, int p)
{
    int k=0;
    while (n>=p)
    {
        k+=n/p;
        n/=p;
    }
    return k;
}
 
/* This function calculates (a^b)%MOD */
long long pow(int a, int b, int MOD)
{
    long long x=1,y=a; 
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD; 
        b /= 2;
    }
    return x;
}
 
/*  Modular Multiplicative Inverse
    Using Euler's Theorem
    a^(phi(m)) = 1 (mod m)
    a^(-1) = a^(m-2) (mod m) */
long long InverseEuler(int n, int MOD)
{
    return pow(n,MOD-2,MOD);
}
 
long long factMOD(int n, int MOD)
{
    long long res = 1; 
    while (n > 0)
    {
        for (int i=2, m=n%MOD; i<=m; i++)
            res = (res * i) % MOD;
        if ((n/=MOD)%2 > 0) 
            res = MOD - res;
    }
    return res;
}
 
long long C(int n, int r, int MOD)
{
    if (countFact(n, MOD) > countFact(r, MOD) + countFact(n-r, MOD))
        return 0;
 
    return (factMOD(n, MOD) *
            ((InverseEuler(factMOD(r, MOD), MOD) * 
            InverseEuler(factMOD(n-r, MOD), MOD)) % MOD)) % MOD;
}

long long TotalWaYs(int N, int M)
{
 
    if ((N + M) % 3 != 0)
        return 0;
    int X = N - (N + M)/3;
    int Y = M - (N + M)/3;
    if (X < 0 || Y < 0)
        return 0;

    return C(X + Y, Y,Mod);
}
 
int main()
{
 
    int N, M;
    cin>>N>>M;
    cout << TotalWaYs(N, M);
    

}