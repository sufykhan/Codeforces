#include <bits/stdc++.h>
 
#define fulcrum(...) ;
#ifndef promising
#define dump(...)
#endif
 
#define E 2.718281828459045
#define PI 3.141592653589793
#define M3 998244353
#define M7 1000000007
#define INF 0x3fffffff
#define INF64 0x3fffffff3fffffff
 
const int P=M3;
 
#define loop(i,n) for(int i=0;i<(n);i++)
#define lback(i,n) for(int i=(n)-1;i>=0;i--)
#define rep(i,l,r) for(int i=(l);i<(r);i++)
#define rback(i,l,r) for(int i=(r)-1;i>=(l);i--)
#define all(x) (x).begin(),(x).end()
#define tri(op,a,b,c) op(op(a,b),c)
#define isz(x) ((int)(x).size())
#define iln(x) ((int)(x).length())
 
#define mid (l+(r-l)/2)
#define lson (x<<1)
#define rson (x<<1|1)
 
using namespace std;
 
typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<long long,int> pli;
typedef pair<long long,long long> pll;
typedef complex<double> cp;
template<class T> using vector2D = vector<vector<T>>;
template<class T> using vector3D = vector<vector2D<T>>;
 
template<class T> bool umax(T &x, T y) { return (x<y)? x=y,true: false; }
template<class T> bool umin(T &x, T y) { return (x>y)? x=y,true: false; }
 
void prepare() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    loop(i,n) cin>>a[i];
    sort(all(a));
    int ans=0,gap=INF;
    loop(i,n) {
        if(a[i]<=0) {
            if(i) umin(gap,a[i]-a[i-1]);
            ++ans;
        }
        if(a[i]>0) {
            if(a[i]<=gap) ++ans;
            break;
        }
    }
    cout<<ans<<endl;
}
 
int main() {
    prepare();
    int T;
    cin>>T;
    while(T--) solve();
    return 0;
}