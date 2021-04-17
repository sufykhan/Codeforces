#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T --> 0) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        vector<int> b;
        for (int i = 0; i < n; i++) {
            if (i == 0 || a[i] != a[i - 1]) {
                b.emplace_back(a[i]);
            }
        }
        for (int i = 0; i < n; i++) {
            if (i > 0 && a[i] == a[i - 1]) {
                b.emplace_back(a[i]);
            }
        }
        for (auto x : b) cout << x << ' ';
        cout << '\n';
    }
    return 0;
    cout << "amogus";
}