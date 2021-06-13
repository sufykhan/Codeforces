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
intl t, n,m;

void printv(vector<vector<char>>cc){
   for(auto xxc:cc){
       for(auto u:xxc){
           cout<<u;
       }
       cout<<"\n";
   }
}
bool compi(vector<vector<char>>target,vector<vector<char>>v){
    rep(i,0,n){
        rep(j,0,m){
            if(target[i][j]=='.') continue;
            if(target[i][j]!=v[i][j]){
                return false;
            }

        }
    }
    return true;
}
void solve(){
    cin>>n>>m;
    vector<vector<char>>v;
    vector<vector<char>>v1;
    vector<vector<char>>target(n,vector<char>(m));
    rep(i,0,n){
         vector<char>xx;
         vector<char>xx1;
        rep(j,0,m){
            if((i+j)%2==0){
                xx.push_back('R');
                xx1.push_back('W');
            }
            else{
                xx.push_back('W');
                xx1.push_back('R');
            }
        }
        v.push_back(xx);
        v1.push_back(xx1);
    }
    rep(i,0,n){
        rep(j,0,m){
            cin>>target[i][j];
        }
    }
    
    if(compi(target,v)){
        cout<<"YES\n";
        printv(v);
        return;
    }
    if(compi(target,v1)){
        cout<<"YES\n";
        printv(v1);
        return;
    }
    cout<<"NO\n";
    return;

    
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
