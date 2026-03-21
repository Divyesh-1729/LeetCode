class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int startrow = x;
        int endrow = x+k-1;
        int startcol= y;
        int endcol = y+k-1;

        while(startrow < endrow)
        {
            for(int j=startcol; j<=endcol; j++)
            {
                swap(grid[startrow][j],grid[endrow][j]);
            }
            startrow++;
            endrow--;
        }
        return grid;
    }
};