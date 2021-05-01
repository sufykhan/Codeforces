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
    cin>>n;vector<float>v(n);rep(i,0,n){cin>>v[i];}
    vector<float> newv;vector<int> v1;
    float x=*min_element(v.begin(),v.end());
    rep(i,0,n){
        v[i]=(float)v[i]/x;
        intl nv=v[i]*10;
        if(nv%10==0) v1.pb(v[i]); 
    }
    newv=v;
    sort(newv.begin(),newv.end());
    sort(v1.begin(),v1.end());
    bool flag=true;intl pointer=0;

    rep(i,0,n){
       intl nv=v[i]*10;
       if(nv%10!=0){
           if(newv[i]!=v[i]){
               flag=false;
           }
       }
       else{
           if(newv[i]!=v1[pointer]){
                
                flag=false;
           }
        //    else{
        //        cout<<"1-->";
        //    }
           pointer++;
       }
    }
    // for(auto &xx:newv){
    //     cout<<xx<<" ";
    // }
    // cout<<endl;
    // for(auto &xx:v1){
    //     cout<<xx<<" ";
    // }
    //cout<<endl;
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    // for(auto &xx:newv){
    //     cout<<xx<<" ";
    // }
    // cout<<endl;
    
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
