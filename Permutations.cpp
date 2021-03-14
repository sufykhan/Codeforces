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

bool EQUAL(intl a,intl b){
    if(abs(a-b)<1e-9){
        return true;
    }
    return false;
}

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
    intl n;cin>>n;
    if(n==2 || n==3){
        cout<<"NO SOLUTION";
    }
    else{
        intl x=n%2;
        intl v=(n+x)/2;
        cout<<v<<" ";
        rep(i,x,v){
            if(i!=0) cout<<i<<" ";
            cout<<n+x-i<<" ";
        }
    }
}
