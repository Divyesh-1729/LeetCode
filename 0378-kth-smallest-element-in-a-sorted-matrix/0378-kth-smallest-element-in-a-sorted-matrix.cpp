class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>sorted;
        int n =matrix.size();
        int m =matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                sorted.push_back(matrix[i][j]);
            }
        }
        sort(sorted.begin(),sorted.end());
        return sorted[k-1];
    }
};