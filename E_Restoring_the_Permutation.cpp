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
const intl N=2e5+5;
intl cnt[N];
void solve(){
    cin>>n;vi v(n);rep(i,0,n) cin>>v[i];vi arr;vi nn;
    vi arr1;vi arr2;
    memset(cnt,0,sizeof(cnt));
    arr.pb(v[0]);
   arr1.pb(v[0]);
    arr2.pb(v[0]);
    nn.pb(v[0]);
     cnt[arr[0]]++;
    rep(i,0,n-1){
        if(v[i]!=v[i+1]){
            cnt[v[i+1]]++;
            arr.pb(v[i+1]);
            nn.pb(v[i+1]);
        }
        else{
            arr.pb(0);
        }
    }
    print(arr);
    bool flag=true;intl cnting=0;
    rep(i,1,n){
       if(cnting<nn.size()){
           intl k=1;flag=true;
           while(cnt[arr1[i-1]-k]!=0){
               k++;
               if(arr1[i-1]-k==0){
                   flag=false;
                   cnting++;
                   break;
               }
           }
           if(flag){
           cnt[arr1[i-1]-k]++;
           arr1.pb(arr1[i-1]-k);
           }
           else{
            arr1.pb(nn[cnting]);
            cnting++;
           }
       }
       
    }
    
    print(arr1);
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
