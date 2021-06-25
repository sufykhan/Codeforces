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

bool isPrime(intl n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (intl i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

void print(vector<intl> v)
{
    for (auto x : v)
    {
        cout << x << ' ';
    }
    cout << endl;
}

bool sortbySec(pair<intl, intl> &a, pair<intl, intl> &b)
{
    return (a.second > b.second);
}
intl t, n,x;

void solve(){
    cin>>n;
    intl pos[2*n+1];
    memset(pos,-1,sizeof(pos));
    rep(i,1,n+1){
        cin>>x;
        pos[x]=i;
    }
    intl ans=0;
    for(intl i=3;i<2*n;i++){
        for(intl j=1;j<=sqrt(i);j++){
            if(i%j==0 && i!=j*j && pos[j]!=-1 && pos[i/j]!=-1){
                if(pos[j]+pos[i/j]==i){
                    ans++;
                }
            }
        }
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
