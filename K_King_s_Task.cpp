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
intl ans = INT_MAX;
bool check(vector<intl> &v, intl n)
{
    rep(i, 0, n)
    {
        if (v[i] != i + 1)
        {
            return false;
        }
    }
    return true;
}

void solve(vector<intl> &v, intl n, vector<intl> &v1)
{
  intl flag=0; intl cal = 0;
  rep(sufy,0,2){
      cal=0;
     rep(i, 0, n)
    {   
        print(v);
        if (check(v, n) && i==0)
        {
            ans =0;
            flag=1;
        }
       cal++;
        if ((i+sufy) % 2 == 0)
        {
            for (int j = 0; j < n; j += 2)
            {
                intl c = v[j];
                v[j] = v[j + 1];
                v[j + 1] = c;
                
            }
        }
        else
        {
            rep(j, 0, n / 2)
            {
                intl c = v[j];
                v[j] = v[j + n/2];
                v[j + n/2] = c;
            }
        }
        
        if (check(v, n))
        {
            ans = min(cal, ans);
            flag=1;
        }
        
    }
  }
    
    if(flag==0 ) {
        cout<<"-1\n";
    }
    else{
        cout<<ans<<"\n";
    }
}

intl t, n;
int main()
{
    FASTIO();
    cin >> t;
    vi v(2*t);
    vi v1(2*t);
    rep(ii, 0, 2*t)
    {
        cin >> v[ii];
        v1[ii] = v[ii];
    }
    solve(v, 2*t, v1);
}
