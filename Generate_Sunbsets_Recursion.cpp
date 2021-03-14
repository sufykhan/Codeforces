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
void print(vector<intl>v){
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<"\n";
}
void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void FILEIO(){
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
}
 vector<intl>v;
void fn(intl par,intl n){
    // cout<<"F("<<par<<","<<n<<")"<<endl;
    // print(v);
    if(par==n+1){
       print(v);
    }
    else{
   v.push_back(par);
   fn(par+1,n);
   v.pop_back();
   fn(par+1,n);
    }
}
int main(){
    FASTIO();
    intl n;cin>>n;
    fn(1,n);
}