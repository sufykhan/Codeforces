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
intl t,a,b;
string s;

void solve(){
    cin>>a>>b>>s;intl j=0,ans=0;bool flag=false;
    rep(i,0,s.size()){
        if(s[i]=='0'){
            j++;
        }else{
            if(flag){
                ans+=min(a,b*j);
                
            }
            j=0;
            flag=true;
        }
    }
    if(flag) ans+=a;
   
cout<<ans<<"\n";
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

// 00101000111010100-->
// zero->1b+a,3b+a,1b+a,1b+a
// one->1a,1a,3a,1a,1a<--grouped

// 6,9 5 true
// 6,3 9 

// T F T F T
// F T F T F

// 0000001001
