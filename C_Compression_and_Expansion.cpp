#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
typedef vector<intl> vi;
#define F first
#define S second
#define pb push_back
#define rep(i, a, n) for (intl i = a; i < n; i++)

void FASTIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void print(vector<intl> v)
{
    rep(i,0,v.size())
    {
        if(i!=v.size()-1) cout << v[i]<< '.';
        else cout<<v[i]<<"\n";
    }
    
}


intl t, n,x;

void solve(){
    cin>>n;
    vi v(n);
    stack<int>st;
    st.push(1);
    cout<<"1\n";
    intl x;cin>>x;
    rep(i,1,n){
        cin>>v[i];
            if(v[i]==1){
                st.push(v[i]);
            }
            else{
                while(!(st.top()+1==v[i])){
                    st.pop();
                }
                st.pop();
                st.push(v[i]);
            }
            
            
            
            vector<intl>xx;
            while(!st.empty()){
                xx.push_back(st.top());
                st.pop();
            }
            reverse(xx.begin(),xx.end());
            print(xx);
            for(auto kk:xx){
                st.push(kk);
            }
            
    }
    
    
}
int main()
{
    FASTIO();
    cin >> t;
    rep(ii, 0, t)
    {
        solve();
    }
}
