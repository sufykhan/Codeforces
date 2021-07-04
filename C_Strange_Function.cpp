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
intl vec[55];
intl mod=1e9+7;
void solve(){
	cin>>n;
	intl ans1=0,prev=0;
    for(intl i=1;i<42;i++){
		intl cnt=n-n/vec[i];
		ans1=(ans1+i*(cnt-prev))%mod;
		prev=cnt;
	}
	cout<<ans1<<"\n";
}

int main()
{
	FASTIO();
	intl ans=1;
	vec[1]=1;
	rep(i,2,42){
		vec[i]=ans*i/(__gcd(ans,i));
		ans=vec[i];
		//cout<<vec[i]<<" ";
	}
	
	cin >> t;
	rep(ii, 0, t)
	{
		solve();
	}
}
