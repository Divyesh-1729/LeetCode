class Solution {
public:
    int fin(int n, vector<int>& dp)
    {
        if(n<=1)
        {
            return n;
        }

        if(dp[n]!=-1)
        {
            return dp[n];
        }

        dp[n]=fin(n-1,dp) +fin(n-2, dp);
        return dp[n];
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        int ans = fin(n,dp);
        return ans;
        
    }
};