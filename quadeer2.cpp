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

bool isPrime(intl n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (intl i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int main()
{
    FASTIO();
    cin >> t;
    vi v(t);vi neg;vi pri;
    rep(ii, 0, t)
    {   
        cin>>v[ii];
        if(v[ii]<0){
            neg.pb(ii+1);
        }
        else{
            if(isPrime(v[ii])){
                pri.pb(ii+1);
            }
        }
        
    }
    // rep(i,0,neg.size()){
    //     cout<<neg[i]<<" ";
    // }
    // cout<<"\n";
    // rep(i,0,pri.size()){
    //     cout<<pri[i]<<" ";
    // }
    // cout<<"\n";
    intl ans=0;
    map<intl,intl>mp;
    for(intl i=0;i<pri.size()-1;i++){
        intl negcnt=0;
        rep(j,0,neg.size()){
            if(neg[j]>pri[i] && pri[i+1]>neg[j]){
              negcnt++;
            }
        }
        mp[pri[i+1]-pri[i]+1]=negcnt;
    }
    intl target;
     for(auto &x:mp){
       target=x.S;break;
   }
   
   for(auto &x:mp){
       if(x.S==target){
           ans=max(ans,x.F);
       }
   }
  


    cout<<ans<<"\n";
    

}
