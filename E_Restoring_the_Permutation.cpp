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
const intl N = 2e4 + 5;
intl cnt[N];

void answer(vector<intl> arr, intl n, intl ind, vector<intl> arr2,vector<intl>v)
{
    rep(i, 1, n)
    {
        if (arr[i] == 0)
        {
            intl k = 1;
            while (cnt[k] != 0)
            {
                k++;
            }
            cnt[k]++;
            arr2.pb(k);
        }
        else
        {
            arr2.pb(arr[i]);
        }
    }
   
    print(arr2);
    
}

void solve(bool yes,vi v,intl n)
{
    
    set<intl>s;intl first=0;
    rep(i,0,n){
        intl x;x=v[i];
        if(x>first){
            rep(j,first+1,x){
                s.insert(j);
            }
            cout<<x<<" ";
            first=x;
        }
        else{
            if(yes) {
                cout<<*s.begin()<<" ";
                s.erase(s.begin());
            }
            else{
                auto it =s.end();
                it--;
                cout<<*it<<" ";
                s.erase(it);
            }
        }
    }
    cout<<"\n";
}

int main()
{
    FASTIO();
    cin >> t;
    rep(ii, 0, t)
    {
        cin >> n;vi v(n);
        rep(i,0,n) cin>>v[i];
        solve(true,v,n);
        solve(false,v,n);
    }
}


// void go(bool lo) {
//     set<int> avail;
//     int lst = 0;
//     F0R(i, N) {
//         if (A[i] > lst) {
//             FOR(j, lst+1, A[i]) {
//                 avail.ins(j);
//             }
//             cout << A[i] << " ";
//             lst = A[i];
//         } else {
//             if (lo) {
//                 cout << *avail.begin() << " ";
//                 avail.erase(avail.begin());
//             } else {
//                 auto it = avail.end();
//                 it--;
//                 cout << *it << " ";
//                 avail.erase(it);
//             }
//         }
//     }
//     cout << nl;
// }