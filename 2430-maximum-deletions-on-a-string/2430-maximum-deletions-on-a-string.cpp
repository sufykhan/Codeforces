class Solution {
public:
    int dp[40000] = {};
int dfs(int i, string &s) {
    if (dp[i] == 0) {
        dp[i] = 1;
        for (int len = 1; i + 2 * len <= s.size(); ++len)
            if (s.compare(i, len, s, i + len, len) == 0)
                dp[i] = max(dp[i], 1 + dfs(i + len, s));
    }
    return dp[i];
}
int deleteString(string s) {
    return dfs(0, s);
}
 
};