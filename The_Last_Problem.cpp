#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
typedef vector<intl> vi;

#define rep(i, a, n) for (intl i = a; i < n; i++)

void FASTIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

intl t;

intl values(intl x,intl y){
   intl ans=(x*(x+1))/2 + x*(y-1)+((y-1)*(y-2))/2;
   return ans;
}
void solve(){
    intl x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    intl x=values(x1,y1);
    intl ans=0;
    while(x1<x2){
        ans+=values(x1,y1);
        x1++;
    }
    while(y1<=y2){
        ans+=values(x2,y1);
        y1++;
    }
    cout<<ans<<"\n";
}
int main()
{
    FASTIO();
    cin >> t;
    rep(ii, 0, t)
    {
        solve();
    }
}
