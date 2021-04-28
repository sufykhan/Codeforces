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
intl t, n;

void solve()
{
    cin >> n;
    map<intl, intl> mp;
    vi v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    intl mx = 1;
    rep(target, 2, 101)
    {
        intl ans = 0;

        for (auto &x : mp)
        {
            if (mp.find(target-x.F) != mp.end() && x.S>0)
            {
                if (2 * x.F == target && x.S>=2)
                {
                    ans += (x.S) ;
                   // cout<<target<<" ";
                }
                else if(x.S>0 && mp[target-x.F]>0)
                {
                    ans += min(x.S, mp[target - x.F]);
                }
            }
        }
        mx = max(ans/2, mx);
    }
    cout << mx << "\n";
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
