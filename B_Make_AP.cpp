#include <bits/stdc++.h>
using namespace std;


void solve(long long a,long long b,long long c)
{
    
    long long d1=b-a;
    long long d2=c-b;
    long long d3=(c-a)/2;

    long long a1=b-d1;
    long long a2=2*b-c;
    long long a3=a;

    long long ans1=a1+2*d1;  //a3
    long long ans2=a2; //a1
    long long ans3=a3+d3; //a2

    // cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    // cout<<c<<" "<<a<<" "<<b<<"\n";
    if(ans1>=c&&ans1%c==0 ) {
        cout<<"YES\n";
        return;
    }
    if(ans2>=a&&ans2%a==0 ) {
        cout<<"YES\n";
        return;
    }
    if(ans3>=b && ans3%b==0 && (c-a)%2==0) {
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
    return;
}


int main()
{  
    long long t;cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        //cout<<a<<" "<<b<<" "<<c<<"\n";
        solve(a,b,c);
    }
}
