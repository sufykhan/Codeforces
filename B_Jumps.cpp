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
intl t, n, c;
int main()
{
    FASTIO();
    cin >> t;
    rep(ii, 0, t)
    {
        c = 0;
        cin >> n;
        while (c * (c + 1) < 2 * n)
        {
            c++;
        }
        if (c * (c + 1) / 2 == n + 1)
        {
            c++;
        }
        cout << c << "\n";
        
    }
}
