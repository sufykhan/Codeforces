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
intl t, n, m;

void solve()
{
    cin >> n >> m;
    string s1[n], s2[n-1];
    intl arr[m] = {0};
    vector<string>v;
    rep(i, 0, n)
    {
        cin >> s1[i];
        //v.push_back(s1);
        rep(j, 0, m)
        {
            arr[j]+=s1[i][j];
        }
    }
    rep(i, 0, n - 1)
    {
        cin >> s2[i];
        rep(j, 0, m)
        {
           arr[j]-=s2[i][j];
        }
    }
    for(auto xx:arr){
        cout<<char(xx);
    }
    cout<<endl;
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
