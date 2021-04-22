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

bool isPrime(intl n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (intl i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
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
void solve(){
    cin>>n;map<intl,intl>mp;
    intl n1=n;
    rep(i,2,sqrt(n)+1){
       
        intl cnt=0;
         while(n%i==0){
          cnt++;
          n=n/i;
         }
        if(cnt>0) mp[i]=cnt;
    }
    if(n>2) mp[n]=1;
    mp[1]=1;
    intl maxF=0,maxS=0;
    for(auto&y:mp){
       // cout<<y.F<<" "<<y.S<<"\n";
        if(y.S>=maxS){
            maxF=y.F;
            maxS=y.S;
        }
        
    }
    cout<<maxS<<"\n";
    rep(i,0,maxS-1){
        cout<<maxF<<" ";
   
    }
    intl last=n1/pow(maxF,maxS-1);
    cout<<last<<"\n";
}
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        solve();
}
}

