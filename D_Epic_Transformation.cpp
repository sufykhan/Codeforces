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
    cin>>n;//cout<<n<<"\n";
    vi v(n);map<intl,intl>m;priority_queue<intl>q;
    rep(i,0,n) {cin>>v[i];m[v[i]]++;}
    for(auto &x:m){
        q.push(x.S);
    }
    while(q.size()>=2){
        intl a=q.top();q.pop();
        intl b=q.top();q.pop();
        a--;b--;
        if(a) q.push(a);
        if(b) q.push(b);
    }
    if(q.size()==0) cout<<"0\n";
    else cout<<q.top()<<"\n";
    
  
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
//  1-2-3-1-2-3-1-2-3 -->oddcount*frequency%2==0->0 else 1; >1
//                          evencount*frequency=0   >1
//                          solo==1 -->arr[]={4,4,1,2,5,8}

 