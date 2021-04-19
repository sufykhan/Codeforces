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

intl t, n;
string r, b;
void solve()
{
    cin >> n >> r >> b;
    intl sumr = 0, sumb = 0;
    rep(i, 0, n)
    {
        if (r[i] > b[i])
        {
            sumr++;
        }
        else if (r[i] < b[i])
        {
            sumb++;
        }
        
    }
    if (sumr ==sumb)
    {
        cout << "EQUAL\n";
    }
    else
    {
        if (sumr < sumb)
        {
            cout << "BLUE\n";
        }
        else
        {
            cout << "RED\n";
        }
    }
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
