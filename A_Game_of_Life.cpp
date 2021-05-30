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
intl t, n,k;

void solve(){
    cin>>n>>k;
    string s;cin>>s;
    if(s.length()==count(s.begin(),s.end(),'0')){
           cout<<s<<"\n";
           return;
    }
    intl cnt=0;vi v;bool flag=false;
    rep(i,0,n){
        if(s[i]=='0'){
            cnt++;
            flag=false;
        }
        else{
            if(!flag){
            if(cnt!=0) v.push_back(cnt);
            flag=true;
            cnt=0;
            }
        }
    }
    if(cnt!=0){
        v.push_back(2*cnt);
    }
    if(s[0]=='0') v[0]=v[0]*2;
    cout<<s<<"\n";
    print(v);
    
}
void solve1(){
    cin>>n>>k;
    string s;cin>>s;
    if(s.length()==count(s.begin(),s.end(),'0')){
           cout<<s<<"\n";
           return;
    }
    set<intl>ss;bool flag=false;
    rep(i,0,n){
        if(s[i]=='1'){
            if(!flag) ss.insert(i);
        }
        else{
           if(s[i-1]=='1' && i>0) ss.insert(i-1);
           flag=false;
        }
    }
    //cout<<s<<'\n';
    vi v;
    for(auto xx:ss){
        v.push_back(xx);
    }
    //print(v);
    vi black;
    rep(i,0,v.size()-1){
    //    if((v[i]+v[i+1])%2==0){
    //        black.push_back((v[i]+v[i+1])/2);
    //    }
       intl between=v[i+1]-v[i]-1;
       intl xx=max(1LL*0,between/2-k);
       between=between/2-xx;
       rep(j,0,between){
           ss.insert(v[i]+(j+1));
           ss.insert(v[i+1]-(j+1));
       }
       if((v[i]+v[i+1])%2==0){
           ss.erase((v[i]+v[i+1])/2);
       }
    }
    if(s[0]=='0'){
       intl between=v[0];
       intl xx=max(1LL*0,between-k);
       between=between-xx;
       rep(j,0,between){
           ss.insert(v[0]-(j+1));
       }
    }
    if(s[n-1]=='0'){
       intl between=n-v[v.size()-1]-1;
       intl xx=max(1LL*0,between-k);
       between=between-xx;
       rep(j,0,between){
           ss.insert(v[v.size()-1]+(j+1));
       }
    }
    rep(i,0,n){
        if(ss.find(i)!=ss.end()){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    }
    cout<<"\n";
}
int main()
{
    FASTIO();
    cin >> t;
    rep(ii, 0, t)
    {
        solve1();
    }
}
