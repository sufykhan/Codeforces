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

void solve1(){
    cin>>n;vi v(n);vi tar(n);rep(i,0,n) {cin>>v[i];}
    intl y=0;
    tar[y]=*max_element(v.begin(),v.end());
    rep(i,0,n){if(v[i]==tar[y]) {v[i]=0;break;}}
    
    rep(yy,1,n){
        intl maxi=0,xx=0;
    rep(i,0,n){
        if(__gcd(v[i],tar[yy-1])>maxi && v[i]!=0){
            maxi=__gcd(v[i],tar[yy-1]);
            xx=i;
        }
    }
    tar[yy]=v[xx];
    v[xx]=0;
    }
    print(tar);
}
void solve() {
    int n;
    cin >> n;
    int a[n];
    int mi = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mi = (a[i] > a[mi] ? i : mi);
    }
    vector<int> b(n);
    b[0] = a[mi]; a[mi] = 0;
    int cg = b[0];
    for (int i = 1; i < n; i++) {
        int ci = 0, cans = 0;
        for (int j = 0; j < n; j++)
            if (a[j] && __gcd(a[j], cg) > cans) {
                cans = __gcd(a[j], cg);
                ci = j;
            }
        b[i] = a[ci];
        cg = cans;
        a[ci] = 0;
    }
    for (int i = 0; i < n; i++)
        cout << b[i] << ' ';
    cout << '\n';
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
