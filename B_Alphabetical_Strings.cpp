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
intl t;
string s;

void solve(){
    cin>>s;intl pos=-1;
    intl n=(intl)s.size();
    vi v(n);
    deque<intl>dq;
    rep(i,0,n){
        intl y=s[i]-97+1;
        v[i]=y;
        dq.push_back(y);
        // if(y==1){
        //     pos=i;
        // }
    }

    for(intl i=n;i>=1;i--){
     if(dq.size()==0){
         cout<<"NO\n";
         return;
     }
      if(dq.front()==i) dq.pop_front();
      else if(dq.back()==i) dq.pop_back();
      else{
           cout<<"NO\n";
         return;
      }
    }
     if(dq.size()==0){
         cout<<"YES\n";
     }
     else{
         cout<<"NO\n";
     }

    // //cout<<pos<<"\n";
    // intl target=2,cnt=1,flagL=0,flagR=0;
    // if(pos==-1) {cout<<"NO\n";return;}
    // while(1){
    //     if(target==n+1) break;
    //     while(v[pos-cnt]==target && pos-cnt>=0){
    //          target++;
    //          cnt++;
    //          flagL=1;
    //          //cout<<"Left";
    //     }
    //     if(flagL==1){
    //         cnt=target-cnt;
    //     }
    //     while(v[pos+cnt]==target  && pos+cnt<n){
    //          target++;
    //          cnt++;
    //          flagR=1;
    //         // cout<<"right";
    //     }
    //     if(flagR==1){
    //         cnt=target-cnt;
    //     }

    //     if(flagR==0 && flagL==0){
    //         cout<<"NO\n";
    //         return;
    //     }

    //     flagL=0;flagR=0;
    // }
    // cout<<"YES\n";
   
    
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