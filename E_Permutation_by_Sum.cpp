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
intl t, n, l, r, s;

void solve()
{
    cin >> n >> l >> r >> s;
    intl terms = r - l + 1;
    intl comp1 = (n * (n + 1)) / 2 - ((n - terms) * (n - terms + 1)) / 2;
    intl comp2 = ((terms) * (terms + 1)) / 2;
    if (s > comp1 || s < comp2)
    {
        cout << "-1\n";
        return;
    }
    vector<bool> vis(n + 1, 0);
    vi v;
    intl j = n;
    intl sum = 0;
    for (intl i = terms; i > 1; i--)
    {
        intl comp = (i * (i - 1)) / 2;
        while (!(s - j >= comp && vis[j] == false))
        {
            j--;
        }

      
            sum += j;
            v.push_back(j);
            vis[j] = true;
         j--;
        //cout<<j<<" ";
    }
    if(vis[s-sum]){
        cout<<"-1\n";
    }
    v.push_back(s-sum);
    vis[s-sum]=true;
    vi xx;
    rep(i, 0, n)
    {
        if (!vis[i + 1])
            xx.push_back(i + 1);
    }
    //print(xx);
    //print(v);
    rep(i,1,n+1){
        if(i>=l && i<=r){
            cout<<v[v.size()-1]<<" ";
            v.pop_back();
        }
        else{
            cout<<xx[xx.size()-1]<<" ";
            xx.pop_back();
        }
    }
    cout << "\n";
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











//  int n, l, r, s;
//         cin >> n >> l >> r >> s;
//         if(s > n * (r - l + 1) - (r - l) * (r - l + 1) / 2 || (r - l + 1) * (r - l + 2) / 2 > s){
//             cout << -1 << endl;
//             continue;
//         }
//         vector<int> v(n);
//         int p = 1;
//         vector<bool> used(501);
//         repq(i, l, r){
//             int gap = r - i;
//             while(s - p > n * gap - gap * (gap - 1) / 2)
//                 p++;
//             used[p] = true;
//             s -= p;
//             v[i - 1] = p++;
//         }
//         p = 1;
//         rep(i, 0, n){
//             if(v[i])
//                 cout << v[i] << " ";
//             else{
//                 while(used[p])
//                     p++;
//                 cout << p++ << " ";
//             }
//         }
//         cout << endl;
//     }