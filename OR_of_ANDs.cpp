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
intl t, n, q;
int main()
{
    FASTIO();
    cin >> t;
    while (t--)
    {
        n, q;
        cin >> n >> q;
        intl a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        intl dp[31] = {0};
        rep(i, 0, n)
        {
            rep(j, 0, 31)
            {
                intl x = 1 << j;
                if (a[i] & x)
                    dp[j] += 1;
            }
        }
        intl ans = 0;
        rep(i, 0, 31)
        {
            intl x = 1 << i;
            if (dp[i])
                ans += x;
        }
        cout << ans << endl;
        rep(xx,0,q)
        {
            intl idx, val;
            cin >> idx >> val;
            rep(i,0,31)
            {
                intl x = 1 << i;
                if (a[idx - 1] & x)
                {
                    dp[i] -= 1;
                }
            }
            rep(i,0,31)
            {
                intl x = 1 << i;
                if (val & x)
                {
                    dp[i] += 1;
                }
            }
            a[idx - 1] = val;
            intl ans = 0;
            rep(i,0,31)
            {
                intl x = 1 << i;
                if (dp[i] > 0)
                {
                    ans += x;
                }
            }
            cout << ans << "\n";
        }
    }
}
