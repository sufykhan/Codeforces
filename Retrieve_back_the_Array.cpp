#include <bits/stdc++.h>
using namespace std;

int getXOR(int n)
{
  if (n % 4 == 0)
    return n;
  if (n % 4 == 1)
    return 1;
  if (n % 4 == 2)
    return n + 1;
  return 0;
}

void printV(vector<int>v){
    int a=0;
    for(auto x:v){
       cout<<x<<" ";
       a^=x;
    }
    cout<<"-->"<<a<<"\n";
}


void getV(int x,int n){
    vector<int>v;int ans=0;
    for(int i=1;i<=n-3;i++) {
        v.push_back(i);
    }
    int xo=getXOR(n-3);
    //cout<<xo<<"\n";
    int a=1<<17;
    v.push_back(a+xo);
    v.push_back(a+x);
    v.push_back(xo);
    printV(v);
}
void solve(){
    int n,x;
    cin>>n>>x;
    if(x<n-3){
        cout<<"YES"<<"-->"<<n<<" "<<x<<"\n";
        getV(x,n);
    }
    else{
        cout<<"NO\n";
    }
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}