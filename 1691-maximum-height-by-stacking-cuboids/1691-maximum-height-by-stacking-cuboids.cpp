class Solution {
public:

bool canPlace(vector<int>&c1,vector<int>&c2)
{
    if(c1[0]<=c2[0]&&c1[1]<=c2[1]&&c1[2]<=c2[2])
    {
        return true;
    }
    else
    {
        return false;
    }
}
int solve(vector<vector<int>>& cuboids, int curr, int prev,vector<vector<int>>& dp)
{
    //sorting alll the cubod in the dimensopon

    for(auto& cuboid:cuboids)
    {
        sort(cuboid.begin(),cuboid.end());
    }
    
    sort(cuboids.begin(),cuboids.end());

    if(curr>=cuboids.size())
    {
        return 0;
    }
    if(dp[curr][prev+1]!=-1)
    {
        return dp[curr][prev+1];
    }
    //Include excluide pattern
    int inc=0;
    if(prev==-1 || canPlace(cuboids[prev],cuboids[curr]))
    {
       inc = cuboids[curr][2]+ solve(cuboids,curr+1,curr,dp);
    }

    int exc  = 0+ solve(cuboids,curr+1,prev,dp);

    return dp[curr][prev+1]= max(inc,exc);


}
    int maxHeight(vector<vector<int>>& cuboids) {
        int curr= 0;
        int prev = -1;
        int n = cuboids.size();
        vector<vector<int>>dp(n,vector<int>(n+10,-1));
        int ans = solve(cuboids,0,-1,dp);
        return ans;
    }
};