class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int,int>mp;

        for(int i =0;i<grid.size();i++)
        {
            for(int j =0;j<n;j++)
            {
                mp[grid[i][j]]++;
            }
        }
        int rpt = -1;
        int miss = -1;

        for(int i =1;i<=n*n;i++)
        {
            if(mp[i]==2)
            {
                rpt = i;
            }
            if(mp[i]==0)
            {
                miss = i;
            }
        }
        return {rpt,miss};
    }
};