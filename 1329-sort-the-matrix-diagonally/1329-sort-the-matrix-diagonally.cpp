class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();

        unordered_map<int,vector<int>>mp;
        for (int i=0; i<m;i++) 
        {
            for (int j=0;j<n;j++) 
            {
                mp[i-j].push_back(mat[i][j]);
            }
        }
        //Diagonal la kadhne
        for (auto& [key,vec]:mp) 
        {
            sort(vec.begin(),vec.end(),greater<int>());
        }

        //Diagonal madhe tkane
        for (int i=0;i<m;i++) 
        {
            for (int j=0;j<n;j++) 
            {
                mat[i][j]=mp[i-j].back();

                mp[i-j].pop_back();
            }
        }

        return mat;
    }
};