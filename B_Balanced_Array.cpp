#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
#define rep(i, a, n) for (intl i = a; i < n; i++)

intl t,n;
int main()
{
    cin>>t;
    rep(i,0,t){
        cin>>n;
        if(n%4==0){
            cout<<"YES\n";
            rep(x,1,n/2+1){
                cout<<x*2<<" ";
            }
            rep(x,1,n/2+1){
                if(x<=n/4)
                { cout<<x*2-1<<" ";
                }
                else{
                    cout<<x*2+1<<" ";
                }
            }
            cout<<"\n";
        }
        else{
            cout<<"NO\n";        
            }
    }
}