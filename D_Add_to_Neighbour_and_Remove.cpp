#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
typedef vector<intl> vi;
typedef pair<intl, intl> pi;

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define rep(i, a, n) for (intl i = a; i < n; i++)

void FASTIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool sortbySec(pair<intl, intl> &a, pair<intl, intl> &b)
{
    return (a.second > b.second);
}
intl t, n;

bool solve(intl p,vector<intl>v){
     rep(i,0,v.size()-1){
            if(v[i]<p){
                v[i+1]+=v[i];
            }
            else if(v[i]>p){
                return false;
            }
            if(i==v.size()-2 && v[i+1]>p){
                return false;
            }
     }
     return true;
}
int main()
{
    FASTIO();
    cin >> t;
    rep(x, 0, t)
    {
        cin >> n;
        vi v(n);intl sum=0;
        rep(i, 0, n)
        {
            cin >> v[i];
            sum+=v[i];
        }
        set<intl>divisor;
        rep(i,1,n+1){
            if(sum%i==0){
                divisor.emplace(sum/i);
            }
        }
        intl ans=n-1;
        for(auto &p:divisor){
            if(solve(p,v)){
                ans=n-sum/p;
                break;
            }
        }
        cout<<ans<<"\n";
    }
}
