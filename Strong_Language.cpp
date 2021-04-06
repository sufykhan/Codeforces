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
intl t, n, k, sumo, flag;

int main()
{
    FASTIO();
    cin >> t;
    rep(ii, 0, t)
    {
        
        cin >> n >> k;
        char s[n];
        rep(i,0,n){
            cin>>s[i];
        }
        int ans=0,l=0;
        rep(i, 0, n)
        {
            if(s[i]=='*'){
                ans++;
                if(ans==k){
                    cout<<"YES\n";
                    l++;
                    break;
                }
            }
            else{
                ans=0;
            }
           
        }
        if(l==0){
            cout<<"NO\n";
        }
        
    }
}
