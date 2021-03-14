#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define oo 1000000010
const int N = 300010;

int n , m;

int a[N] , b[N] , c[N] , ans[N];

vector< int > g[N];

void solve(){
	scanf("%d%d",&n,&m);
	for(int i = 1 ;i <= n;i++) g[i].clear();
	for(int i = 0 ;i < n;i++)
		scanf("%d",&a[i]);
	for(int i = 0 ;i < n;i++){
		scanf("%d",&b[i]);
		if(b[i] != a[i])
			g[b[i]].push_back(i);
	}
	for(int i = 0; i < m;i++){
		scanf("%d",&c[i]);
	}
	int last = -1;
	if((int)g[c[m - 1]].size() > 0){
		last = g[c[m - 1]].back();
		g[c[m - 1]].pop_back();
	}
	else{
		for(int i = 0 ;i < n;i++){
			if(b[i] == c[m - 1]){
				last = i;
				break;
			}
		}
	}
	if(last == -1){
		puts("NO");
		return;
	}
	ans[m - 1] = last;
	for(int i = 0 ;i < m - 1;i++){
		if((int)g[c[i]].size() == 0){
		 	ans[i] = last;
		}
		else{
			ans[i] = g[c[i]].back();
			g[c[i]].pop_back();
		}
	}
	for(int i = 1;i <= n;i++){
		if((int)g[i].size() > 0){
			puts("NO");
			return;
		}
	}
	puts("YES");
	for(int i = 0 ;i < m;i++){
		if(i) putchar(' ');
		printf("%d",ans[i] + 1);
	}
	puts("");
}



int main(){
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long intl;
// typedef vector<intl> vi;
// typedef pair<intl, intl> pi;

// #define F first
// #define S second
// #define pb push_back
// #define pob pop_back
// #define mp make_pair
// #define rep(i, a, n) for (intl i = a; i < n; i++)

// bool EQUAL(intl a, intl b)
// {
//     if (abs(a - b) < 1e-9)
//     {
//         return true;
//     }
//     return false;
// }

// void FASTIO()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// }
// void FILEIO()
// {
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// }

// bool difinaction(vector <intl>difab,vector<intl>painter,vector<intl>v)
// {   
//     for(auto x:difab){
//         cout<<x<<" ";
//     }
//     cout<<"\n";
//     return true;
// }
// bool check(intl a,vector<intl>b){
//       for(auto x:b){
//          if(x==a){
//              return true;
//          }
//       }
//           return false;
// }
// intl value=1e5+5;
// int main()
// {
//     FASTIO();
//     intl t, n, m;
//     cin >> t;
//     rep(i, 0, t)
//     {
//         cin >> n >> m;
//         vi a;
//         vi b;
//         vi c;
//         vi difab;
//         intl xx;
        
//         vi visited(value,0);
//         rep(xi, 0, n)
//         {
//             cin >> xx;
//             a.push_back(xx);
//         }
//         rep(xi, 0, n)
//         {
//             cin >> xx;
//             b.push_back(xx);
//             if(a[xi]!=xx){
//                 difab.push_back(xx);
//             }
//         }
//         rep(xi, 0, m)
//         {
//             cin >> xx;
//             c.push_back(xx);
//         }
//      if(difinaction(difab,c,visited) && (check(c.back(),b) || check(c.back(),a))){
//          cout<<"YES\n";
//      }
//      else{
//          cout<<"NO\n";
//      }
//     }
// }