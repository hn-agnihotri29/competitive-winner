int dp[2] = {1 ,1};
    int climbStairs(int n) {
        
        for(int i = 0; i < n - 1; i++) {
            int temp = dp[0];
            dp[0] = dp[0] + dp[1];
            dp[1] = temp;
        }
        
        return dp[0];
    }
