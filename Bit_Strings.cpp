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
    intl n;cin>>n;intl ans=1;
    rep(i,1,n+1){
     ans=(ans%M * 2%M)%M;
    }
    cout<<ans;
}
// print(pow(2,int(input)))