#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int h1,h2,p1,p2;
    cin>>h1>>p1>>h2>>p2;
    int x1=ceil(h2/p1);
    int x2=ceil(h1/p2);
    if(x1<x2) cout<<"YES\n";
    else cout<<"NO\n";
}
