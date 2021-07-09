// #include <bits/stdc++.h>
// using namespace std;
// typedef long long intl;
// typedef vector<intl> vi;
// typedef pair<intl, intl> pi;

// #define F first
// #define S second
// #define pb push_back
// #define mp make_pair
// #define rep(i, a, n) for (intl i = a; i < n; i++)

// void FASTIO()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// }

// bool isPrime(intl n)
// {
//     if (n <= 1)
//         return false;
//     if (n <= 3)
//         return true;

//     if (n % 2 == 0 || n % 3 == 0)
//         return false;

//     for (intl i = 5; i * i <= n; i = i + 6)
//         if (n % i == 0 || n % (i + 2) == 0)
//             return false;

//     return true;
// }

// void print(vector<intl> v)
// {
//     for (auto x : v)
//     {
//         cout << x << ' ';
//     }
//     cout << endl;
// }

// bool sortbySec(pair<intl, intl> &a, pair<intl, intl> &b)
// {
//     return (a.second > b.second);
// }
// intl t, n,k;

// void solve(){
//     cin>>k;
//     intl l=1,r=n,mid,val;
//     while(true){
//         mid=l+(r-l)/2;
//         cout<<"?"<<1<<" "<<mid<<"\n";
//         cout.flush();
//         cin>>val;
//         if(l==r){
//             cout<<"!"<<l<<"\n";
//             cout.flush();
//             return;
//         }
//         if(mid-val<k){
//             l=mid+1;
//         }
//         else{
//             r=mid;
//         }
//     }

// }
// int main()
// {
//     FASTIO();
//     cin >>n>>t;
//     rep(ii, 0, t)
//     {
//         solve();
//     }
// }

//123456789
//011010101   3rd

/// Down with The Sickness
#pragma GCC optimize("O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimization("unroll-loops")

#include "bits/stdc++.h"
using namespace std;

typedef long long intl;
typedef vector<intl> vi;

#define pb push_back
#define F first
#define S second
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(a) a.begin(), a.end()

const int N = 2e5 + 5, LG = 19, MOD = 998244353;

int ask(int l, int r)
{
    cout << "? " << l << ' ' << r << endl;
    int x;
    cin >> x;
    return x;
}
int main()
{
#ifdef ONLINE_JUDGE
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#endif // ONLINE_JUDGE

    int n, t;
    cin >> n >> t;

    while (t--)
    {
        int k;
        cin >> k;
        int lo = 1, hi = n;

        while (lo < hi)
        {

            int md = lo + (hi - lo) / 2;
            int z = ask(1, md);
            z = md - z;
            if (z >= k)
                hi = md;
            else
                lo = md + 1;
        }

        cout << "! " << lo << endl;
    }

    return 0;
}