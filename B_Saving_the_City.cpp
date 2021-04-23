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
intl t,a,b;
string s;

void solve(){
    cin>>a>>b>>s;
    intl n=s.length();intl cnt=0,cnto=0;vi zero;vi one;bool flag=false;intl x1=0,xo=0;
    rep(i,0,n){
        if(s[i]=='0') xo++;
        else x1++;
    }
    if(x1==0){
        cout<<"0\n";return;
    }
    if(x1==1){
        cout<<a<<"\n";return;
    }
    rep(i,0,n){
        if(s[i]=='1'){
            cnt=1;
            if(cnto!=0 && flag){
                zero.pb(cnto*b+a);
            }
            cnto=0;
            flag=true;
        }
        else{
            cnto++;
            if(cnt!=0) 
            {
                one.pb(cnt*a);
            }
            cnt=0;
        }
    }
    if(cnt>0) one.pb(cnt*a);
    vi ans;vi ansone;
    rep(i,0,one.size()-1){
    if((one[i]+one[i+1])>zero[i]){
        ans.pb(zero[i]);
    }else{
        ans.pb(one[i]+one[i+1]);
    }
    ansone.pb(one[i]+one[i+1]);
    }
    if(one.size()==1){
        cout<<one[0]<<"\n";return;
    }
    // print(one);
    // print(zero);
    // print(ans);
    // print(ansone);
    intl ans1=0,ans2=0;
    rep(i,0,ans.size()){
        if(i%2==0){
            ans1+=ans[i];
            ans2+=ansone[i];
        }
        else{
            ans2+=ans[i];
            ans1+=ansone[i];
        }
    }
    cout<<min(ans1,ans2)<<"\n";
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

// 00101000111010100-->
// zero->1b+a,3b+a,1b+a,1b+a
// one->1a,1a,3a,1a,1a<--grouped

// 6,9 5 true
// 6,3 9 

// T F T F T
// F T F T F

// 0000001001