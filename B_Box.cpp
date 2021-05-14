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
    cin>>n;int arr[n];int v[n];map<int,int>mp;
    vector<bool>visited(n+1,false);
    rep(i,0,n){
        cin>>arr[i];
        visited[arr[i]]=true;
        mp[arr[i]]++;
        if(mp[arr[i]]==1) {v[i]=arr[i];}
        else {v[i]=0;}
    }
    vi h;
    rep(i,1,n+1){
        if(!visited[i]){
            h.push_back(i);
        }
    }
    int itr=0;
    rep(i,0,n){
       if(v[i]==0 ){
           if(h[itr]>arr[i]){
               cout<<"-1\n";return;
           }
           else{
               v[i]=h[itr];
               itr++;
           }
       }
    }
    rep(i,0,n){
        cout<<v[i]<<" ";
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
