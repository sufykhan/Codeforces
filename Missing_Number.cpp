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
    FILEIO();
   intl t;cin>>t;intl sum=0;
   rep(i,0,t-1){
       intl x;cin>>x;
       sum=(sum^x)^(i+1);

   }
   sum=sum^t;
   cout<<sum<<"\n";
}
