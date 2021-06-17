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
    string s;cin>>s;
    n=s.length();intl comp=-1;intl cnt=0;
   // cout<<s<<"\n";
    stack<char>st;
    vector<intl>v;
    intl ans=0;
    rep(i,0,n){
        if(s[i]=='0'){
            st.push(0);
            if(comp==-1) {comp=1;cnt++;}
            else{
               int t1=s[i]-'0';
               if(t1==comp){

                   comp=1;
                   cnt++;
               }
               else{
                   comp=1;
                   ans+=(cnt*(cnt+1))/2;
                   //v.push_back(cnt);
                   st.pop();
                  intl xx=0;
                   while(!st.empty() && st.top()=='?'){
                       xx++;
                       st.pop();
                   }
                   while(!st.empty()){
                       st.pop();
                   }
                   ans-=(xx*(xx+1))/2;
                   cnt=1+xx;
               }
            }
        }
        if(s[i]=='1'){
            st.push(0);
            if(comp==-1) {comp=0;cnt++;}
            else{
               int t1=s[i]-'0';
               if(t1==comp){
                   comp=0;
                   cnt++;
               }
               else{
                  comp=0;
                  ans+=(cnt*(cnt+1))/2;
                  // v.push_back(cnt);
                   st.pop();
                   intl xx=0;
                   while(!st.empty() && st.top()=='?'){
                       xx++;
                       st.pop();
                   }
                   while(!st.empty()){
                       st.pop();
                   }
                   ans-=(xx*(xx+1))/2;
                   cnt=1+xx;
               }
            }
        }
        if(s[i]=='?'){
            st.push('?');
            cnt++;
            if(comp!=-1){
                if(comp==0) comp=1;
                else comp=0;
            }
            
        }
        
    }
    if(cnt!=0) {
      ans+=(cnt*(cnt+1))/2;
     // v.push_back(cnt);
    }
    cout<<ans<<"\n";
   // print(v);
    
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
