class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count = 0;
        for(int i = 0;i<mat.size();i++)
        {
            for(int j =0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    bool special = true;

                    
                    for(int col = 0; col < mat[0].size(); col++) {
                        if(col != j && mat[i][col] == 1) {
                            special = false;
                            break;
                        }
                    }

                    
                    for(int row = 0; row < mat.size() && special; row++) {
                        if(row != i && mat[row][j] == 1) {
                            special = false;
                            break;
                        }
                    }

                    if(special) count++;
                
                }
            }
        }
        return count;
    }
};