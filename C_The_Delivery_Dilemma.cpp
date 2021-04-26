// 1 3 4 5 6 7 3 9   9->4 7->2  6->6 5->5 4->4 3->8 3->2 1->1 
// 1 2 4 5 6 2 1 4   4<>S 6<>S  <>F  F    F    3->6  
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

void solve(){
    cin>>n;vi v1(n);vi v2(n);multiset<pair<intl,intl>>mul;
    rep(i,0,n) cin>>v1[i];
    rep(i,0,n) cin>>v2[i];
    rep(i,0,n) mul.insert({v1[i],v2[i]});
    intl target=0;
    multiset<pair<intl,intl>>::iterator x=mul.end();
    x--;
    rep(i,0,n){
        //cout<<x->F<<" "<<x->S<<"\n";
        if(x->F>x->S+target){
            target+=x->S;
        }
        else{
            target=max(target,x->F);
        }
        x--;
    }
    cout<<target<<"\n";
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
