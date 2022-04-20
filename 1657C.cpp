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

bool isPalindrome(string s){
    if(s.size()==2 ){
        return s[0]==s[1];
    }
    for(int i=0;2*i<s.size();i++){
        if(s[i]!=s[s.size()-i-1]){
            return false;
        }
    }
    return true;
}
bool isBalanced(string s){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            cnt++;
        }
        else if(s[i]==')'){
            cnt--;
        }
        if(cnt<0){
            return false;
        }
    }
    return cnt==0;
}
// void solve1(){
//     cin>>n;
//     string s;cin>>s;
//     int cnt=0,itr=0;
//     string val="";
//     for(int i=0;i<n;i++){
//         val+=s[i];
//         if(val.size()>=2){
//             if(isPalindrome(val)){
//                 cnt++;
//                 val="";
//                 itr=i+1;
//             }
//             else if(isBalanced(val)){
//                 cnt++;
//                 val="";
//                 itr=i+1;
//             }
//         }        
//     }
//     cout<<cnt<<" "<<n-itr<<"\n";
    
// }

void solve(){
    cin>>n;
    string s;cin>>s;
    int cnt=0,itr=0;
    string val="";
    for(int i=0;i<n;i++){
        if(s[i]=='(' && i+1<n || (s[i]==')' && i+1<n && s[i+1]==')')){
            cnt++;
            i++;
            itr=i+1;
        }
        else{
            int r=i+1;
            while(r<n && s[r]!=s[i]){
                r++;
            }
            if(r==n){
                break;
            }
            i=r;
            itr=i+1;
            cnt++;
        }
    }
    cout<<cnt<<" "<<n-itr<<"\n";
    
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
