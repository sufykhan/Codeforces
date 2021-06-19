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
    cin>>n>>k;
    string s;cin>>s;
    string s2="";
    s2+=s[0];
    intl ind=0;
    rep(i,1,n){
        if(s[i]>s[ind]){
            break;
        }
        s2+=s[i];
        if(s[i]==s[ind]){
            ind++;
        }
        else{
            ind=0;
        }
    }
    while(ind!=0){
        s2.pop_back();
        ind--;
    }
    rep(i,0,k){
        cout<<s2[i%s2.size()];
    }
    cout<<"\n";
    
}
void solve1() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ind = 0;
    string s2;
    s2 += s[0];
    // 4 3 4 2 4 4
    for (int i = 1; i < n; ++i) {
        if (s[i] > s[ind])
            break;
        s2 += s[i];
        if (s[i] == s[ind]) {
            ind++;
        } else {
            ind = 0;
        }
    }
    while (ind != 0) {
        s2.pop_back();
        ind--;
    }
    for (int i = 0; i < k; ++i) {
        cout << s2[i % s2.size()];
    }
    cout << '\n';
}
int main()
{
    FASTIO();
    
        solve();
    
}
