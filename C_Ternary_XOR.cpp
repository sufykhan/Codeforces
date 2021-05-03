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
    cin>>n;string s;cin>>s;
    string s1="",s2="";bool flag=false;
    rep(i,0,n){
        if(s[i]=='2' && flag==false){
            s1+='1';
            s2+='1';
        }
        else if(s[i]=='1' && flag==false){
            s1+='1';
            s2+='0';
            flag=true;
        }
        else if(s[i]=='2' && flag==true){
            s1+='0';
            s2+='2';
        }
        else if(s[i]=='1' && flag==true){
            s1+='0';
            s2+='1';
        }
        else{
            s1+='0';
            s2+='0';
        }
    }
    cout<<s1<<"\n";
    cout<<s2<<"\n";
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
