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

bool sortbySec(pair<intl, intl> &a, pair<intl, intl> &b)
{
    return (a.second > b.second);
}
 void print(vector<intl>v){
     for(auto x:v){
         cout<<x<<" ";
     }
     cout<<"\n";
 }

intl t,n,x;


int main()
{
    FASTIO();
    cin >> t;
    rep(ii, 0, t)
    {
        cin>>n;
        vi v;
        rep(i,0,n){
            cin>>x;
         
                v.pb(x);
        }
        sort(v.begin(),v.end(),greater<intl>());
        intl ans=0;
       rep(i,0,n){
           if(i%2==0){
               if(v[i]%2==0){
                   ans+=v[i];
               }
           }
           else{
               if(v[i]%2==1){
                   ans-=v[i];
               }
           }
       }
       if(ans>0){
           cout<<"Alice\n";
       }
       else if(ans<0){
           cout<<"Bob\n";
       }
       else{
           cout<<"Tie\n";
       }
    }
}
