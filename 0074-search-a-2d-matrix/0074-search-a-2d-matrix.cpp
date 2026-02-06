class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>numbers;
        
        for(int i =0;i<matrix.size();i++ )
        {
            for(int j = 0;j<matrix[i].size();j++)
            {
                numbers.push_back(matrix[i][j]);
            }
        }
        for(int k = 0;k<numbers.size();k++)
        {
            if(numbers[k]==target)
            {
                return true;
            }
        }
        return false;
    }
};