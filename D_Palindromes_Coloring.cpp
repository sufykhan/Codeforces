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
intl t;

void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;int arr[26]={0};
    for(int i=0;i<n;i++){
        arr[char(s[i])-'a']++;
    }  
    cout<<k<<"-->\n";
    for(int i=0;i<26;i++){
        if(arr[i]>0) cout<<char(i+'a')<<" "<<arr[i]<<endl;
    }
    cout<<"\n";
   

}

int main(){

    FASTIO();
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}