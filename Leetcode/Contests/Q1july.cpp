#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=16;
    vector<int> v((1 << n));
    int i = 2;
    v[0] = 0;
    v[1] = 1;
    int last = 1 << n;
    int k=1;
    while (i != last)
    {
        int cnt = i;
        int plus = 1 << (k);
        for (int j = cnt - 1; j >= 0; j--)
        {
            v[i] = v[j] + plus;
           // cout << v[j] << "  " << plus << " " << v[i] << "\n";
            i++;
        }
        k++;
       
        
    }
    int x;cin>>x;
    vector<int>vv(v.begin(),v.begin()+ (1<<x));
    for(auto x:vv){
        cout<<x<<" ";
    }
}
