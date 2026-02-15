class Solution {
public:
int solve(vector<int> &nums, int i, vector<int> &dp)
{
    //base case
    if(i>=nums.size())
    {
        return 0;
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    int include = nums[i] + solve(nums, i+2, dp);
    int exclude = 0 + solve(nums, i+1, dp);
    dp[i] = max(include,exclude);

    return dp[i];
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1, -1);
        int i = 0;
        int ans = solve(nums,i,dp);
        return ans;
        
    }
};