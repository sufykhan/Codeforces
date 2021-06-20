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
intl t, n,x,k;

void solve1(){
    cin>>n>>k>>x;
    vi v(n);
    rep(i,0,n){
         cin>>v[i];
    }
    sort(v.begin(),v.end());
    intl ans =0;
    vi yep;
    rep(i,0,n-1){
        if(v[i+1]-v[i]>x){
            //cout<<v[i+1]<<" "<<v[i]<<"\n";
            yep.push_back((v[i+1]-v[i])/(k+1));
        }
    }
    sort(yep.begin(),yep.end());
    
    ans=yep.size()+1;
    for(auto y:yep){
        if(k>=y){
            k=k-y;
            ans--;
        }
    }
    cout<<ans<<"\n";
}
void solve(){
    cin>>n>>k>>x;
    intl arr[n];
    for(intl i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    vi v;
    for(intl i=1;i<n;i++){
        if(arr[i]-arr[i-1]>x){
            v.push_back((arr[i]-arr[i-1]-1)/x);
        }
    }
    sort(v.begin(),v.end(),greater<intl>());
    while(v.size()){
        if(v[v.size()-1]<=k){
            k-=v[v.size()-1];
            v.pop_back();
        }
        else{
            break;
        }
            
    }
    cout<<v.size()+1<<endl;
}
 
int main()
{
    FASTIO();
   
        solve();
    
}
