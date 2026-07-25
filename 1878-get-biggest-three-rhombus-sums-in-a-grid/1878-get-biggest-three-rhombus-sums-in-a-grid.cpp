class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        set<int, greater<int>> sums;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                // radius = 0
                sums.insert(grid[i][j]);

                // Try every possible radius
                for (int k = 1;; k++) {

                    // Check whether rhombus fits
                    if (i - k < 0 || i + k >= m ||
                        j - k < 0 || j + k >= n)
                        break;

                    int sum = 0;

                    // Top -> Right
                    for (int t = 0; t < k; t++)
                        sum += grid[i - k + t][j + t];

                    // Right -> Bottom
                    for (int t = 0; t < k; t++)
                        sum += grid[i + t][j + k - t];

                    // Bottom -> Left
                    for (int t = 0; t < k; t++)
                        sum += grid[i + k - t][j - t];

                    // Left -> Top
                    for (int t = 0; t < k; t++)
                        sum += grid[i - t][j - k + t];

                    sums.insert(sum);
                }
            }
        }

        vector<int> ans;

        for (int x : sums) {
            ans.push_back(x);
            if (ans.size() == 3)
                break;
        }

        return ans;
    }
};