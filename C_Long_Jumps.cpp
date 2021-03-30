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
intl t,n;
int main()
{
    FASTIO();
    cin >> t;
    rep(ii, 0, t){
       
        cin>>n;
        vi v(n);
        vi dp(n);
        for(intl &x:v){
            cin>>x;
        }
        for(intl i=n-1;i>=0;i--){
            dp[i]=v[i];
            intl j=i+v[i];
            if(j<n){
                dp[i]+=dp[j];
            }
        }
        cout<<*max_element(dp.begin(),dp.end())<<"\n";


    }
}
