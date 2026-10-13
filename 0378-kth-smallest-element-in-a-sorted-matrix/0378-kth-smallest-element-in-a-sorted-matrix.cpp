class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>smallest;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                smallest.push_back(matrix[i][j]);
            }
        }
        sort(smallest.begin(),smallest.end());
        return smallest[k-1];
    }
};