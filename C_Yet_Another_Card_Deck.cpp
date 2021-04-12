#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
typedef vector<intl> vi;
void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}void print(vector<intl>v){
for(auto x:v){
cout<<x<<' ';
}
cout<<endl;
}
intl n,q;
int main(){
    FASTIO();
     
    cin>>n>>q;
    vi v(n);
    for(auto &x:v) cin>>x;
    
    map<intl,intl>mp;
    for(intl i=n-1;i>=0;i--){
        mp[v[i]]=i+1;
    }
    vector<pair<intl,intl>>vec;
    for(auto x:mp) vec.push_back(x);
   
    while(q--){
        intl color;cin>>color;
        intl i=0;
        while(vec[i].first!=color){
            i++;
        }
        cout<<vec[i].second<<" ";
        for(int j=0;j<vec.size();j++){
            if(vec[j].second<vec[i].second){
                vec[j].second++;
            }
        }
        vec[i].second=1;
    }
    cout<<"\n";
}
