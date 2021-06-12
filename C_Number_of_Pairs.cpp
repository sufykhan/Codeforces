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

intl countPair(intl arr[], intl size, intl a, intl b) {
    intl cnt = 0;
    intl i = 0,low = size-1;
    intl high=size-1;
    while (i < high) {
        low = max(i, low);
        while (low > i && arr[i] + arr[low] >= a) --low;
        while (high > low && arr[i] + arr[high] > b) --high; 
        cnt += (high-low);
        ++i;
    }
    return cnt;
}

void solve(){
    intl l,r;cin>>n>>l>>r;
    vi v(n);
  
    rep(i,0,n){
        cin>>v[i];
    }
    sort(v.begin(),v.end());


    rep(i,0,n){

    }
    //print(v);intl ans=0;
    // intl ans=0;
    // for(intl i=n-1;i>=0;i--){
    //     intl x=l-v[i];
    //     intl y=r-v[i];
    //     if((x>v[i] && y>v[i]) ||(x<=0 && y<=0)) continue;
    //     if(x>v[i]) x=v[i];
    //     if(y>v[i]) y=v[i];
    //     //cout<<v[i]<<"--> ("<<x<<","<<y<<")\n";
    //     intl starting=upper_bound(v.begin(),v.end(),x-1)-v.begin();
    //     intl ending=lower_bound(v.begin(),v.end(),y)-v.begin();
    //     if(starting==i) starting+=1;
    //     if(ending==i) ending-=1;
    //     ans+=max(1LL*0,ending-starting+1);
    //     //cout<<starting<<" "<<ending<<"\n";
    //     // ans+=ending-starting;
    // }
    // cout<<ans<<"\n";
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
