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
string a, b;

bool check(vector<intl> v, string a, string b)
{
    intl flip = 0;
    // print(v);
    // cout<<a<<"\n";
    // cout<<b<<"\n";
    rep(i, 0, v.size() - 1)
    {
        int flag;

        // cout<<v[i]<<" "<<v[i+1]<<"jnnnn\n";
        for (intl j = v[i]; j < v[i + 1]; j++)
        {
            a[v[i]] == b[v[i]] ? flag = 1 : flag = 0;
            // cout<<a[j]<<" "<<b[j]<<"\n";
            if (a[j] == b[j])
            {
                if (flag == 0)
                {
                    return false;
                }
                flag = 1;
            }
            else
            {
                if (flag == 1)
                {
                    return false;
                }
                flag = 0;
            }
        }
        if (flag == 0)
        {
            flip++;
        }
    }
    flip = flip % 2;
    // if ((flip == 1 && a[0] == b[0]) || (flip == 0 && a[0] != b[0]))
    // {
    //     return false;
    // }
    return true;
}

void solve(string a, string b)
{
    a.pb('0');
    b.pb('0');
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += (a[i] == '1') - (a[i] == '0');
        if ((a[i] == b[i]) != (a[i + 1] == b[i + 1]) && cnt != 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main()
{
    FASTIO();
    cin >> t, n;
    rep(ii, 0, t)
    {
        cin >> n >> a >> b;
        solve(a, b);
    }
}
