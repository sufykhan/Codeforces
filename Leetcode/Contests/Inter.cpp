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
    string s;
    intl a,b,c,d;
    //cin>>a>>b>>c>>d;
    
    cin>>s;
    string f1,f2,s1;
    intl cnt=0;
    rep(i,0,s.size()){
        if(s[i]=='/'){
            if(cnt==0){
            a=stoi(s1);
            s1="";
            cnt++;
            }
            if(cnt==2){
                c=stoi(s1);
                s1="";
                cnt++;
            }
        }
        else if(s[i]=='+'){
            b=stoi(s1);
            s1="";
            cnt++;
        }
        else{
             s1+=s[i];
        }
       
    }
    d=stoi(s1);
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";

    intl f=(b*d)/__gcd(b,d);
    intl e=(a*f)/b+(c*f)/d;


    intl xx=__gcd(f,e);
     f=f/xx;
     e=e/xx;
    cout<<s<<"\n";
    string ans="";
    ans+=to_string(e);
    //ans+=to_string(e)+'/'+to_string(f);
    cout<<ans<<"\n";
}


int maxIndexDiff(int v[], int n) {
    vector<int> rMax(n);
    rMax[n-1] = v[n-1];
    for(int i =n-2;i>=0;i--){
        rMax[i] = max(rMax[i+1],v[i]); 
    }
    int i = 0,j=0,ans = -1e9;
    while(i<n &&j<n){
        if(rMax[j]>=v[i]){
            ans = max(ans,v[j]-v[i]);
            j++;
        } else
            i++;
    }
    return ans;
}

int main()
{
    FASTIO();
    cin >>n;
    rep(ii, 0, n)
    {
        solve();
    }
}
