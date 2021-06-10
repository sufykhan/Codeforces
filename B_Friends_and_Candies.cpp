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
    vi  v(n);intl sumo=0;
    rep(i,0,n){
        cin>>v[i];
        sumo+=v[i];
    }
    sort(v.begin(),v.end());
    if(sumo%n==0){
        intl ans=0;intl target=sumo/n;
        rep(i,0,n){
            if(v[i]>target){
                ans++;
            }
        }
        cout<<ans<<"\n";
        // vi pref(n);vi suff(n);
        // pref[0]=abs(target-v[0]);
        // suff[0]=abs(target-v[n-1]);
        // rep(i,1,n){
        //      pref[i]=pref[i-1]+abs(target-v[i]);
        // }
        // for(intl i=1;i<n;i++){
        //     suff[i]=suff[i-1]+abs(target-v[n-i-1]);
        // }
        // // print(pref);
        // // print(suff);
        // intl bb=0;
        // rep(i,0,n){
        //     if(v[i]==target){
        //         bb++;
        //     }
        // }
        // if(n==1||bb==n){
        //     cout<<"0\n";return;
        // }
        // rep(i,0,n){
        //     if(suff[i]==pref[i]){
        //         cout<<i+1<<"\n";
        //         return;
        //     }
        // }
    }
       
    
    else{
        cout<<"-1\n";
        return;
    }
    
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
