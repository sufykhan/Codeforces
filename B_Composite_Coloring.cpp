#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
typedef vector<intl> vi;
typedef pair<intl, intl> pi;

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define rep(i, a, n) for (intl i = a; i < n; i++)

void FASTIO()
{
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

void print(vector<intl> v)
{
    for (auto x : v)
    {
        cout << x << ' ';
    }
    cout << endl;
}

bool sortbySec(pair<intl, intl> &a, pair<intl, intl> &b)
{
    return (a.second > b.second);
}
intl t, n;

vector<vector<intl>>v(1002,vector<intl>());
void solve()
{
    cin >> n;vi lst(n);
     for (intl i=0;i<=1007;++i) v[i].clear();
    rep(k, 0, n)
    {
        intl xc;
        cin >> xc;
        for(int i=2;i*i<=xc;i++){
            if(xc%i==0){
                v[i].push_back(k);
                break;
            }
        }
    }
     intl ans=0;
        rep(i,1,1001){
            if(v[i].size()>0){
                ans++;
                for(auto xx:v[i]){
                    lst[xx]=ans;
                }
            }
        }
        cout<<ans<<"\n";
        print(lst);
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

// #include<bits/stdc++.h>
// using namespace std;
 
// int n,t;
// vector<int> ans[1007];
// int res[1007];
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0), cout.tie(0);
   
//     cin>>t;
//     while (t--){
//         cin>>n;
//         for (int i=1;i<=1000;++i) ans[i].clear();
//         for (int i=1;i<=n;++i){
//            int u;
//            cin>>u; 
//         for (int yy=2;yy<=u;++yy){
//             if (u%yy==0) {
//                 ans[yy].push_back(i);
//                 break;
//             }
//         }
           
//         }
//         int ret=0;
//         for (int i=1;i<=1000;++i){
//             if (ans[i].size()){
//                 ++ret;
//                 for (auto c:ans[i]){
//                     res[c]=ret;
//                 }
//             }
//         }
//         cout<<ret<<"\n";
//         for (int i=1;i<=n;++i){
//             cout<<res[i]<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }