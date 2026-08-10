class Solution {
public:
    int solve(vector<int>& jobDifficulty, int n, int idx, int d,vector<vector<int>>& dp)
    {
        if (d==1) {
            int maxi=0;
            for (int i=idx; i<n;i++) 
            {
                maxi=max(maxi,jobDifficulty[i]);
            }
            return maxi;
        }
        if(dp[idx][d]!=-1)
        {
            return dp[idx][d];
        }
        
        int maxdiff= INT_MIN;
        int result=  INT_MAX;
        for(int i=idx;i<=n-d;i++)
        {
            maxdiff= max(maxdiff, jobDifficulty[i]);
            result =min(result,maxdiff+solve(jobDifficulty,n,i+1,d-1,dp) );
        }
        return dp[idx][d]=result;
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        vector<vector<int>>dp(n,vector<int>(d+1,-1));

        if(n<d)
        {
            return -1;
        }
        int ans= solve(jobDifficulty, n, 0,d,dp);
        return ans;
    }
};