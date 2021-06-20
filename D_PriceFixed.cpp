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
intl n,x,y;

void solve(){
    cin>>n;
    vector<pair<intl,intl>>comp(n);intl ans=0;
    rep(i,0,n){
        cin>>x>>y;
        comp[i]={x,y};
        ans+=x*2;
    }
    sort(comp.begin(),comp.end(),sortbySec);
    intl i=0,cnt=0;
    // for(auto xx:comp){
    //     cout<<xx.first<<" "<<xx.second<<", ";
    // }
    // cout<<"\n";
    while(i<=comp.size()-1){

        if(i==comp.size()-1){
          
            ans-=max(0LL,comp[i].first-max(0LL,comp[i].second-cnt));
            break;
        }
        else if(cnt>=comp[comp.size()-1].second){
            ans-=comp[comp.size()-1].first;
            cnt+=comp[comp.size()-1].first;
            comp.pop_back();
            continue;
        }
        else if(cnt+comp[i].first<=comp[comp.size()-1].second){
            cnt+=comp[i].first;
            comp[i].first=0;
            i++;
        }
        else{
            intl xxx=comp[comp.size()-1].second-cnt;
            comp[i].first-=xxx;
            ans-=comp[comp.size()-1].first;
            cnt+=xxx+comp[comp.size()-1].first;
            comp.pop_back();
        }
     
        
    }
    cout<<ans<<"\n";
    // for(auto xx:comp){
    //     cout<<xx.first<<" "<<xx.second<<", ";
    // }
    // cout<<"\n";
    
}
int main()
{
    FASTIO();

        solve();
}
