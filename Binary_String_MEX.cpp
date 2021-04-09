#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
typedef vector<intl> vi;
typedef pair<intl,intl> pi;

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define rep(i,a,n) for(intl i=a;i<n;i++)


void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

 void print(vector<intl>v){
for(auto x:v){
cout<<x<<' ';
}
cout<<endl;
}

bool sortbySec(pair<intl,intl>&a,pair<intl,intl>&b){
    return (a.second>b.second);
}
intl t,n;

string decimalToBinary(int n)
{
    string s = bitset<64> (n).to_string();
    const auto loc1 = s.find('1');
     
    if(loc1 != string::npos)
        return s.substr(loc1);
    return "0";
}
bool solve(string t, string s) {
      if(s == t)
      return true;
      int n = s.size();
      int m = t.size();
      int j = 0;
      for(int i = 0; i < n; i++){
         if(t[j] == s[i])
         j++;
         if(j == t.size())
         return true;
      }
      return false;
}
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        string s;cin>>s;
        intl n=s.length();
        rep(i,0,1025){
            
            if(!solve(decimalToBinary(i),s))
            {
                cout<<decimalToBinary(i)<<"\n";
                break;
            }
        }

}
}
