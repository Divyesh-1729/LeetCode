class Solution {
public:
int solve(vector<vector<int>>& grid,int m, int n,vector<vector<int>>& dp )   //Include exlude pattenr vaparla ahe
{
    if(m>=grid.size()|| n>=grid[0].size())
    {
        return INT_MAX;
    }
    if(m==grid.size()-1 && n == grid[0].size()-1)
    {
        return grid[m][n];
    }
    if(dp[m][n]!=-1)
    {
        return dp[m][n];
    }
    int down = 0;
    int right = 0;

    right = solve(grid,m,n+1,dp);
    down =solve(grid,m+1,n,dp);
    int answer = (grid[m][n]) + min(right,down);
    return dp[m][n]=answer;
}
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        
        int ans = solve(grid,0,0,dp);
        return ans;
    }
};