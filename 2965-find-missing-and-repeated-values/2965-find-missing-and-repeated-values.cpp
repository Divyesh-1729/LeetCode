class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int>mp;
        int n=grid.size();

        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                mp[grid[i][j]]++;
            }
        }

        int miss=0;
        int repeat=0;

        for(int i=1;i<=n*n;i++)
        {
            if(mp[i]==0)
            {
                miss=i;
            }
            if(mp[i]==2)
            {
                repeat=i;
            }
        }

        return {repeat,miss};


    }
};