class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(), matrix.end());
        
        for (int i = 0; i <= matrix.size()-1; i++) 
        {
            for (int j = i + 1; j <= matrix[i].size()-1; j++) 
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};