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
    cin>>n;
    
}
int main()
{
    FASTIO();
   int t;
    cin >> t;
    while (t--)
    {
        intl n, m;
        cin >> n >> m;

        intl ans = 0, temp = m;
        
        for(intl i = 2; i * i <= m; i++){
            if(!(temp%i)){
                ans++;
                while(!(temp%i)){
                    temp /= i;
                }
            }
        }
        if(temp > 1){
            ans++;
        }

        vector<intl>arr;
        for(intl i = 1; i * i <= n; i++){
            if(!(n%i)){
                arr.push_back(i);
                if(i != (n/i)){
                    arr.push_back(n/i);
                }
            }
        }

        intl xxx = 0;

        for(auto x: arr){
            if(x <= ans){
                xxx = x;
            }
        }

        cout << xxx << endl;

    }

    return 0;
}


