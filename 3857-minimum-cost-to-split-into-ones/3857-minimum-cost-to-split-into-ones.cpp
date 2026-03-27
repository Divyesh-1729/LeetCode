class Solution {
public:
int solve(int n,vector<int>& dp)
{
    if(n==1)
    {
        return 0;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int mini = INT_MAX;
    for(int i=1;i<=n/2;i++)
    {
            int a=i;
            int b =n-i;
            int cost = a * b+solve(a,dp) +solve(b,dp);

            mini = min(mini,cost);

    }
    return dp[n]=mini;
}


    int minCost(int n) {
        vector<int>dp(n+10,-1);
        int ans = solve(n,dp);
        return ans;
    }
};