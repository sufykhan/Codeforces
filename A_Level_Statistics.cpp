#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;


int main() {
	int tc;
	scanf("%d", &tc);
	while (tc--){
		int n;
		scanf("%d", &n);
		int p = 0, c = 0;
		bool fl = true;
		forn(i, n){
			int x, y;
			scanf("%d%d", &x, &y);
			if (x < p || y < c || y - c > x - p)
				fl = false;
			p = x, c = y;
		}
		puts(fl ? "YES" : "NO");
	}
	return 0;
}