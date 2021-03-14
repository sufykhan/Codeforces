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
void FILEIO(){
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
}
int main(){
    FASTIO();
    intl n;cin>>n;
    if(n%2==0 && n%4==0){
        cout<<"YES\n";
        cout<<n/2<<"\n";
        rep(i,1,n/4+1){
            cout<<i<<" "<<n-i+1<<" ";
        }
        cout<<n/2<<"\n";
        rep(i,n/4+1,n/2+1){
            cout<<i<<" "<<n-i+1<<" ";
        }
    }
    else if(n%2==1 && (n+1)%4==0){
        cout<<"YES\n";
        cout<<(n-3)/2 +1<<"\n";
        cout<<"3 ";
        rep(i,4,(n-3)/4+4){
            cout<<i<<" "<<n-i+4<<" ";
        }
        cout<<"\n";
        cout<<(n-3)/2+2<<"\n";
        cout<<"1 2 ";
        rep(i,(n-3)/4+4,(n-3)/2+4){
            cout<<i<<" "<<n-i+4<<" ";
        }
    }
    else{
        cout<<"NO\n";
    }
}
