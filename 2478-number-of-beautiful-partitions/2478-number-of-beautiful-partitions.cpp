
class Solution {
public:
unordered_set<char> prime {'2', '3', '5', '7'};
int mod = 1e9 + 7, minLength, dp[1001][2][1001]; 
int beautifulPartitions(string s, int k, int ml) {
    minLength = ml;
    memset(dp, -1, sizeof dp);
    return dfs(0, true, k, s);
}
int dfs(int i, bool at_start, int k, string& s, int ans = 0) {
    if (i == s.size()) return k == 0;
    if (i > s.size() || k == 0 || !prime.count(s[i]) && at_start) return 0;
    if (dp[i][at_start][k] != -1) return dp[i][at_start][k];
    if (prime.count(s[i])) {
        if (at_start) ans = dfs(i + minLength - 1, false, k, s);
        else ans = dfs(i + 1, false, k, s);
    }
    else ans = (dfs(i + 1, true, k - 1, s) + dfs(i + 1, false, k, s)) % mod;
    return dp[i][at_start][k] = ans;
}
};