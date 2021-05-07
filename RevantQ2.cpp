int getUmbrellas(int requirement,vector<int>sizes){
    int n=sizes.size();
    int sum=requirement;
    bool dp[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
    for (int i = 1; i <= sum; i++)
        dp[0][i] = false;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < sizes[i - 1])
                dp[i][j] = dp[i - 1][j];
            if (j >= sizes[i - 1])
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - sizes[i - 1]];
        }
    }
    if(dp[n][sum]){
    return dp[n][sum];
    }else{
        return -1;
    }


}