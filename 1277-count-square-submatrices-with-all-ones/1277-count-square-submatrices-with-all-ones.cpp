class Solution {
public:

    int solve(int i,int j,vector<vector<int>>& matrix, int m, int n, vector<vector<int>>& dp )
    {
        if(matrix[i][j]==0)
        {
            return 0;
        }
        if(i==m-1||j==n-1)
        {
            return 1;
        }



        if (matrix[i][j] == 0)
        {
            return dp[i][j] = 0;
        }

        if (dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        return dp[i][j]=1+min({
            solve(i+1,j,matrix,m,n,dp),
            solve(i,j+1,matrix,m,n,dp),
            solve(i+1,j+1,matrix,m,n,dp)
        });
    }
    int countSquares(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>>dp(m, vector<int>(n,-1));

        int ans=0;


        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans= ans+solve(i,j,matrix,m,n,dp);
            }
        }

        return ans;
        
    }
};