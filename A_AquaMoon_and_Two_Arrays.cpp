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
    vi v1(n);
    vi v2(n);
    intl s1=0,s2=0;
    rep(i,0,n){
     cin>>v1[i];
     s1+=v1[i];   
    }
    rep(i,0,n){
     cin>>v2[i];
     s2+=v2[i];
     v2[i]-=v1[i];   
    }
    if(s1!=s2){
        cout<<"-1\n";
        return;
    }
    //print(v2);
    vector<pair<intl,intl>>po;
    rep(i,0,n){
        po.push_back({v2[i],i});
    }
    sort(po.begin(),po.end());
    vector<vector<intl>>ans;
   intl l=0,r=n-1;    
   while(r>l){
       if(po[l].F+po[r].F>0){
           ans.push_back({po[l].S,po[r].S,min(abs(po[l].F),abs(po[r].F))});
           po[r].F+=po[l].F;
           po[l].F=0;
           l++;
           
       }
       else if(po[l].F+po[r].F==0){
           ans.push_back({po[l].S,po[r].S,min(abs(po[l].F),abs(po[r].F))});
           po[l].F=0;
           po[r].F=0;
           l++;
           r--;
       }
       else{
           ans.push_back({po[l].S,po[r].S,min(abs(po[l].F),abs(po[r].F))});
           po[l].F=po[l].F+po[r].F;
           po[r].F=0;
           r--;
       }
   }
   intl m=0;
   for(auto x:ans){
      m+=x[2];
   }
   cout<<m<<"\n";
   for(auto x:ans){
      rep(i,0,x[2]){
          cout<<x[0]+1<<" "<<x[1]+1<<"\n";
      }
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
