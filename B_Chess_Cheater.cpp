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
string s;
void solve(){
    cin>>n>>k>>s;vi v;
    intl cnt=0,cnt1=0;
    if(s[0]!='L') v.pb(0);
    cout<<s<<"\n";
    rep(i,0,n+1){
        if(s[i] && s[i]=='L'){
            cnt++;
            if(cnt1>0){   
                v.pb(cnt1); 
            }
            cnt1=0;
        }
        else{
         cnt1++;
         if(cnt>0){   
          
         v.pb(cnt);
         }
         cnt=0;   
        }
    }
     print(v);
     vector<pair<float,int>>mv;
    rep(i,1,v.size()-1){
        float x=(float)(v[i-1]+v[i+1])/v[i];
       
        mv.pb({x,v[i]});
    }
    intl ans=0;
    sort(mv.begin(),mv.end());
    for(auto &xx:mv){
        cout<<"("<<xx.F<<" "<<xx.S<<") ,";
    }
    cout<<endl;
   
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
