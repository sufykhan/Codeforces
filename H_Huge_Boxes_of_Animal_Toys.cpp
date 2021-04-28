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
intl t, a,b,c,d;

void solve(){
    cin>>a>>b>>c>>d;intl arr[4];
    if((a+b)%2==1){
        arr[2]=0;arr[3]=0;
        if(d>0||a>0){
            arr[0]=1;
        }
        else{
            arr[0]=0;
        }
        if(b>0||c>0){
           arr[1]=1;
        }
        else arr[1]=0;
    }
    else{
        arr[1]=0;arr[0]=1;
        if(d>0||a>0){
            arr[3]=1;
        }else {arr[3]=0;}
        if(b>0||c>0){
           arr[2]=1;
        }else{arr[2]=0;}
    }
    rep(i,0,4){
        if(arr[i]==0) cout<<"Tidak ";
        else cout<<"Ya ";
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
