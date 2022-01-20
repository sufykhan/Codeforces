#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;cin >> n;
   
    unordered_set<string>s;
    int res = 0;
    for (int i = 0; i < n; i++) {
        string x;cin>>x;
        if (s.find(x) == s.end()) {
            s.insert(x);
            res++;
        }
    }
    cout<<res<<"\n";
}
