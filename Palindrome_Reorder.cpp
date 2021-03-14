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

intl M=1e9+7;
void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void FILEIO(){
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
}
int main(){
    FASTIO();
    string s;cin>>s;
    map<char,int>m;
    rep(i,0,s.length()){
        m[s[i]]++;
    }
    string ans="",oddi="";
    intl x=0;
    bool flag=false;
    for(auto&i:m){
        if(i.S %2!=0){
          x++;
          oddi+=string(i.S,i.F);
        }
        else{
            int x=i.S/2;
            ans+=string(x,i.F);
        }
        if(x>1){
            flag=true;
            break;
        }
    }
    string rev = string(ans.rbegin(),ans.rend()); 
    ans=ans+oddi+rev;
    if(flag){
        cout<<"NO SOLUTION";
    }
    else{
        cout<<ans;
    }
    
}