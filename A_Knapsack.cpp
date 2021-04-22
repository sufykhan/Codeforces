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
    return (a.F < b.F);
}
intl t, n, W;
const int N = 200005;
pair<int, int> a[N];
void solve1() {
	std::cin >> n >> W;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a + 1, a + 1 + n);
	vector<int> ans;
	long long now = 0;
	for (int i = n; i; --i) {
		if (now + a[i].first <= W) {
			now += a[i].first;
			ans.push_back(a[i].second);
			if (now >= (W + 1) / 2) {
				std::cout << ans.size() << "\n";
				for (int id : ans) {
					std::cout << id << " ";
				}
				std::cout << "\n";
				return;
			}
		}
	}
	std::cout << -1 << "\n";
}
void solve()
{
    cin >> n >> W;
    intl w=(W+1)/2;
    vector<pair<intl,intl>>v;
    rep(i, 0, n)
    {
        intl x;
        cin >> x;
        v.pb(make_pair(x,i+1));
    }
    sort(v.rbegin(),v.rend());
    vi ans;intl sum=0;
    rep(i,0,n){
        if(sum+v[i].F<=W){
            sum+=v[i].F;ans.pb(v[i].S);
            if(sum>=w){
                cout<<ans.size()<<"\n";
                for(auto &xx:ans){
                    cout<<xx<<" ";
                }
                cout<<"\n";
                return;
            }
        }
    }
    cout<<"-1\n";
    return;
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


//23
//1 7 3 3 8 4 3 3 9 4 3 8  //<=n/2