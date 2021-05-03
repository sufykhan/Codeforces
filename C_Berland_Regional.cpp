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
#define sort(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<intl>())

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

void solve()
{
    cin >> n;
    vi uv(n);
    vi sk(n);
    vector<vector<intl>> v(n+1);multiset<pair<intl,intl>>muls;
    rep(i, 0, n) { cin >> uv[i]; }
    rep(i, 0, n) { cin >> sk[i]; }
    rep(i, 0, n)
    {
        muls.insert({uv[i],sk[i]});
        //v[uv[i]].pb(sk[i]);
    }
    for(auto xx:muls){
        v[xx.F].pb(xx.S);
    }
    //print(v[1]);
    rep(i, 1, n+1)
    {
        
        if(v[i].size()>1){
            //sort(v[i]);
        for (intl j = 1; j < v[i].size(); j++)
        {
            v[i][j] = v[i][j] + v[i][j - 1];
        }
        }
       // print(v[i]);
    }
    vi ans1(n); intl ans=0;
    rep(kk, 0, n)
    {
        ans = 0;
        rep(i, 1, n+1)
        {   
            if(v[i].size()!=0){
            intl target = v[i].size() - 1;
            intl rem = (target + 1) % (kk + 1);
            if (rem == 0)
                ans += v[i][target];
            else
                ans += v[i][target] - v[i][rem - 1];
            }
        }
        ans1[kk]=ans;
    }
    print(ans1);
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


// #include <bits/stdc++.h>
// #define rep(i, a, b) for (int i = a; i <= b; i++)
// #define per(i, a, b) for (int i = b; i >= a; i--)
// using namespace std;	
 
// int n, u[200111];
// vector<long long> g[200111];
// long long ans[200111], pref[200111];
 
// int main() {
// 	cin.tie(0);
// 	ios_base::sync_with_stdio(0);
	
// 	int t;
// 	cin >> t;
// 	while (t--) {
// 		cin >> n;
// 		rep(i, 1, n) g[i].clear(), ans[i] = 0;
// 		rep(i, 1, n) cin >> u[i];
// 		rep(i, 1, n) {
// 			int p; cin >> p;
// 			g[u[i]].push_back(p);
// 		}
// 		rep(i, 1, n) { 
// 			sort(g[i].begin(), g[i].end());
// 			rep(j, 0, (int)g[i].size() - 1)
// 				pref[j + 1] = pref[j] + g[i][j];
// 			rep(j, 1, (int)g[i].size())
// 				ans[j] += pref[(int)g[i].size()] - pref[(int)g[i].size() % j];
// 		}
// 		rep(i, 1, n)
// 			cout << ans[i] << " "; 
// 		cout << "\n";
// 	}
	
// 	return 0;
// }