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


intl sumA(vector<intl>v1,vector<intl>v2,intl start,intl end){
    intl ans=0;
    rep(i,start,end){
        ans+=v1[i]*v2[i];
    }
    return ans;
}
void solve(){
    cin>>n;
    vi v1(n);vi v2(n);
    rep(i,0,n){
        cin>>v1[i];
    }
    rep(i,0,n){
        cin>>v2[i];
    }
    intl pref[n+1]={0};
    rep(i,0,v1.size()){
        if(i==0) pref[i+1]=v1[i]*v2[i];
        pref[i+1]=v1[i]*v2[i]+pref[i];
    }

    intl ans=0;
    rep(i,0,n){
      rep(j,i,n){
       reverse(v1.begin()+i,v1.begin()+j+1);
      // print(v1);
     //  ans=max(pref[i]+pref[n-j-1]+sumA(v1,v2,i,j+1),ans);
     //  cout<<"sum-->"<<pref[i]+pref[n-j-1]+sumA(v1,v2,i,j)<<"\n";
      // cout<<i<<","<<j<<"\n";
       //cout<<pref[n]-pref[j+1]+pref[i]+sumA(v1,v2,i,j+1)<<"[]\n";

       ans=max(ans,pref[n]-pref[j+1]+pref[i]+sumA(v1,v2,i,j+1));
       reverse(v1.begin()+i,v1.begin()+j+1);
      // print(v1);
       //cout<<"***\n";
      }
     // cout<<i<<"*******\n";
       
    }
    cout<<ans<<"\n";
    
}
int main()
{
    FASTIO();
   
        solve();

}
