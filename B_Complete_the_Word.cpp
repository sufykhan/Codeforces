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
    intl n=s.size();
    intl ansR=0,ansL=0;
    for(int i=0;i<n;i++){
        intl arr[26]={0},cnt=0;
        rep(j,0,26){
            if(s[i+j]=='?') cnt++;
            else{
                if(arr[s[i+j]-'A']==0){
                    arr[s[i+j]-'A']=1;
                    cnt++;
                }else{
                    break;
                }
            }
        }
        if(cnt==26){
            ansL=i;
            ansR=i+26;
            break;
        }
    }
    if(ansL==0 && ansR==0){
        cout<<"-1\n";
        return;
    }
    set<intl>st;
    rep(i,0,26){
        st.insert(i);
    }
    for(intl i=ansL;i<ansR;i++){
        if(s[i]!='?'){
            st.erase(s[i]-'A');
        }
    }
    for(intl i=ansL;i<ansR;i++){
        if(s[i]=='?'){
            s[i]=char(65+*st.begin());
            st.erase(s[i]-'A');
        }
    }
    rep(i,0,n){
        if(s[i]=='?'){
            cout<<'Z';
        }
        else{
            cout<<s[i];
        }
    }
    cout<<"\n";
}
int main()
{
    FASTIO();
  
        solve();
}
