class Solution {
public:
    int solve(vector<int>& nums, int i, vector<int>& dp)
    {
        if(i>=nums.size())
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int ghetla=nums[i]+solve(nums,i+2,dp);
        int skipkela=0+solve(nums,i+1,dp);
        return dp[i]=max(ghetla,skipkela);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        int ans=solve(nums,0,dp);
        return ans;
        
    }
};