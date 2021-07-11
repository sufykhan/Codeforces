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
intl t, k, n, m;

void solve()
{
    cin >> k >> n >> m;
    vi v1(n);vi v2(m);
    stack<intl>st1;
    stack<intl>st2;
    rep(i, 0, n)
    {
        cin >> v1[i];
    }
    rep(i, 0, m)
    {
        cin >> v2[i];
    }
    rep(i,0,m){
        st2.push(v2[m-i-1]);
    }
    rep(i,0,n){
        st1.push(v1[n-i-1]);
    }

    vi v(n+m,-1);
    intl t1,t2;
    rep(i,0,m+n){
        if(!st1.empty()) {t1=st1.top();}
        else {t1=-1;}
        if(!st2.empty()) {t2=st2.top();}
        else {t2=-1;}


        //cout<<t1<<" "<<t2<<' ';
        if(t1>0 && k>=t1){
            st1.pop();
            v[i]=t1;
        }
        else if(t2>0 && k>=t2){
            st2.pop();
            v[i]=t2;
        }
        else if(t1==0){
            st1.pop();
            k++;
            v[i]=0;
        }
        else if(t2==0){
            st2.pop();
            k++;
            v[i]=0;
        }
        else{
             cout<<"-1\n";
             return;
        }
    }
    print(v);
  
    
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
