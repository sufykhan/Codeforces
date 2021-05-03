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
intl t, n,k;

void solve(){
    cin>>n>>k;intl pos1b=0;intl i=0;
    intl pos2b=0;
    
    while(pos1b<k){
         i++;
        pos1b+=i;
    }
    pos2b=k-(pos1b-i);
    pos2b=n-pos2b;
    i=n-i-1;
    //cout<<i<<"  "<<pos2b<<"\n";
    rep(j,0,n){
        if(j==i || j==pos2b){
            cout<<"b";
        }
        else{
            cout<<"a";
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
        solve();
    }
}
