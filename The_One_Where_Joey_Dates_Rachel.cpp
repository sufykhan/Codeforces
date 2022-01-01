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


int check(string from,string to){
    int ans=0;vi v;
    for(int i=0;i<from.length();i++){
        if(from[i]!=to[i]){
        
            v.pb(i);
        }
    }
    if(v.size()%2==0){
        for(int i=1;i<v.size();i+=2){
            ans+=v[i]-v[i-1];
        }
        return ans;
    }

     return INT_MAX;
    //  return ans;
}
 
int op(vector<int>v){
     int ans=0,n=v.size();
     for(int i=1;i<n;i+=2){
        ans+=v[i]-v[i-1];
    }
    return ans;
}

void solve(){
    cin>>n>>m;
    string from,to;
    cin>>from>>to;
    
    if(m-n<0) {cout<<"-1\n";return;}
    if(m-n==0) {
        int yo=check(from,to);
        if(yo!=INT_MAX) cout<<yo<<"\n";
        else cout<<"-1\n";
        return;
    }
    int ans=INT_MAX;
    for(int i=0;i<=m-n;i++){
        vector<int>ind;
        for(int j=0;j<n;j++){
            if(from[j]!=to[i+j]){
                ind.pb(j);
            }
        }
        if(ind.size()%2){
           
            if(i!=0){
                ind.insert(ind.begin(),-1);
                ans=min(1LL*ans,op(ind)+m-n);
                ind.erase(ind.begin());
            }
            if(i!=m-n){
                ind.pb(n);
              ans=min(1LL*ans,op(ind)+m-n);
            }
            
        }
        else{
            ans=min(1LL*ans,op(ind)+m-n);
            if(i>0 && i<m-n){
            ind.insert(ind.begin(),-1);
            ind.pb(n);
            }
           ans=min(1LL*ans,op(ind)+m-n);
        }
        
    }
    cout<<ans<<"\n";
    
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
