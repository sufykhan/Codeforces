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
    intl n;cin>>n;intl ans=0;
    rep(i,0,n){
        intl a,b;cin>>a>>b;
        ((2*a-b)%3==0 && (2*b-a)%3==0 && 2*a-b>=0 && 2*b-a>=0)?cout<<"YES\n":cout<<"NO\n";
    }
}