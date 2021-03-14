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
    rep(i,0,n){
        intl rowi,coli;cin>>rowi>>coli;
        intl x=rowi-coli;
        intl row=max(rowi,coli);
        intl col=min(rowi,coli);
        intl pivot=row*(row-1)+1;
        row%2==0?cout<<pivot+x<<"\n":cout<<pivot-x<<"\n";
        
    }
}
