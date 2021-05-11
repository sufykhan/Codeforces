#include <bits/stdc++.h>
using namespace std;


bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}


void solve()
{
    int n;cin >> n;vector<pair<int, int>> m;map<int,int>mp;
    for (int j = 0; j < n; j++){int x;cin >> x; m.push_back({x, j * 2 }); mp.insert({x, j * 2 });}
    set<int>v;
    for(int i=1;i<2*n+1;i++){
        if(mp.find(i)==mp.end()){
            v.insert(i);
        }
    }
    
    //sort(m.begin(),m.end());
    
    for(int i=0;i<n;i++){
        auto it=v.upper_bound(m[i].first);
        m.push_back({*it,m[i].second+1});
        v.erase(*it);
    }
    sort(m.begin(),m.end(),sortbysec);
    for(int i=0;i<n;i++){
        if(m[2*i+1].first<=m[2*i].first){
            cout<<"-1\n";
            return;
        }
    }
    for(auto u:m){
        cout<<u.first<<" ";
    }
    cout<<"\n";
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}

//1()5()7(9)2()8(10)



