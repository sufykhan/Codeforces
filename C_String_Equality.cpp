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
intl t, n,k;string s1,s2;


void solve(){
   intl arr1[27]={0},arr2[27]={0};
   cin>>n>>k>>s1>>s2;
   rep(i,0,n){
       arr1[(char)s1[i]-'a']++;
       arr2[(char)s2[i]-'a']++;
   }
   intl ans=0;
   rep(i,0,26){
   if(arr1[i]<arr2[i] || (arr1[i]=arr1[i]-arr2[i])%k!=0){
   cout<<"No\n";return;
   }
   arr1[i+1]+=arr1[i];
   }
   cout<<"Yes\n";
  
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
