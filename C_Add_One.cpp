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

intl mod=1e9+7 ;

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
intl t, n, m;
int main()
{
    FASTIO();
    cin >> t;
    rep(ii, 0, t)
    {
        cin >> n >> m;
        intl arr[10]={0};
        intl d=n;
        while(d!=0){
            intl x=d%10;
            arr[x]++;
            d=d/10;
        }
       
        }
        cout<<"\n";
}

