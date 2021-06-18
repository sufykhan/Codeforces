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
    intl maxi=s[0]-'a';
    intl cnt=1;
    for(intl i=1;i<n;i++){
        if((intl)(s[i]-'a')>maxi){
            break;
        }
        else if((intl)(s[i]-'a')==maxi){
           cnt++;
        }
        else{
            cnt++;
        }
       
    }
    string ans=string(s.begin(),s.begin()+cnt);
    //cout<<ans<<"\n";
    if(ans.size()>=k){
        cout<<string(ans.begin(),ans.begin()+k)<<"\n";
    }
    else{
        intl inc=k/ans.size();
        intl left=k%ans.size();
        string ansF="";
        rep(i,0,inc){
            ansF+=ans;
        }
        ansF+=string(ans.begin(),ans.begin()+left);
        cout<<ansF<<"\n";
    }
    
}
int main()
{
    FASTIO();
    
        solve();
    
}

//ycufqyyqv