class Solution {
public:
int solve(vector<int>& nums1, vector<int>& nums2,int i, int j,vector<vector<int>>& dp)
{
    if((i==nums1.size()) || (j==nums2.size()))
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }

    int uttar=0;
    if(nums1[i]==nums2[j])
    {
        uttar = 1 + solve(nums1,nums2,i+1,j+1,dp);
    }
    else
    {
        int fixi = solve(nums1,nums2,i,j+1,dp);
        int fixj = solve(nums1,nums2,i+1,j,dp);
        uttar = max(fixi,fixj);
    }
    return dp[i][j]=uttar;
}
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+10000, -1));
      
        int ans = solve(nums1,nums2,0,0,dp);
        return ans;
        
    }
};