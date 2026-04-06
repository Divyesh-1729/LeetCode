class Solution {
public:
int solve(vector<vector<int>>& coins, int i, int j,int m,int n, int neu,vector<vector<vector<int>>>& dp)
{
    if(i==m-1 && j==n-1)
    {
        if(coins[i][j]<0 && neu>0)
        {
            return 0;
        }
        return coins[i][j];
    }
    if(i>=m || j>=n)
    {
        return INT_MIN;
    }
    if(dp[i][j][neu]!=INT_MIN)
    {
        return dp[i][j][neu];
    }


    int include = coins[i][j] + max(solve(coins,i+1,j,m,n,neu,dp), solve(coins,i,j+1,m,n,neu,dp));

    int exclude = INT_MIN;
    if(coins[i][j]<0 and neu>0)
    {
        exclude = max(solve(coins,i+1,j,m,n,neu-1,dp), solve(coins,i,j+1,m,n,neu-1,dp));
    }
    return dp[i][j][neu]=max(include,exclude);


}
    int maximumAmount(vector<vector<int>>& coins) {
        int m  = coins.size();
        int n = coins[0].size();
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(3, INT_MIN)));

        int ans = solve(coins,0,0,m,n,2,dp);
        return ans;
    }
};