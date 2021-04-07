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
intl t, n, k;
int main(){
	FASTIO();
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> a(n);
		for(int i=0;i<n;i++)cin>>a[i];
		int ans = n+1;
		for(int b=0;b<k;b++){
			int to = -2;
			for(int i=0;i<n-1;i++){
				if(a[i] < a[i+1]){
					to = i;
					break;
				}
			}
			ans = to + 1;
			if(to == -2)break;
			a[to]++;
		}
		cout << ans << '\n';
	}	
}