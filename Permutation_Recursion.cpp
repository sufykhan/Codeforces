#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
typedef vector<intl> vi;
typedef pair<intl,intl> pi;

#define F first
#define S second
#define pb push_back
#define ppb pop_back
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
 vector<bool>chosen(100);
 intl n;
void fn(){
    if(v.size()==n){
        print(v);
    }
    else{
        rep(i,1,4){
            if(chosen[i]) continue;
            chosen[i]=true; 
            v.pb(i);
            fn();
            chosen[i]=false;
            v.pop_back();
        }
    }
}
int main(){
    FASTIO();
    cin>>n;
    fn();
}