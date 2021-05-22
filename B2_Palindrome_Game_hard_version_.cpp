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
string s;

bool isPalindrome(string str)
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = str.length() - 1;
  
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            //printf("%s is Not Palindrome", str);
            return false;
        }
    }
    return true;
    //printf("%s is palindrome", str);
}

void solve(){
    
    intl zero=count(s.begin(),s.end(),'0');
    if(zero%2==1){
        if(zero!=1) cout<<"ALICE\n";
        else cout<<"BOB\n"; 
    }
    else{
        intl x=zero/2;

            cout<<"BOB\n";
    }
    
}
void solve2(){
    if(s[n/2]=='0' && count(s.begin(),s.end(),'0')==2 && n%2==1){
        cout<<"DRAW\n";return;
    }
    cout<<"ALICE\n";
}
int main()
{
    FASTIO();
    cin >> t;
    rep(ii, 0, t)
    { 
        cin>>n>>s;
        if(isPalindrome(s)){
        solve();}
        else{
            solve2();
        }
    }
}
