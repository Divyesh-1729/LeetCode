// Brute-force: use extra matrix B and map A[i][j] -> B[j][n-1-i]
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& A) {
        // int n = A.size();
        // if (n <= 1) return;
        // vector<vector<int>> B(n, vector<int>(n));
        // for (int i = 0; i < n; ++i) {
        //     for (int j = 0; j < n; ++j) {
        //         B[j][n - 1 - i] = A[i][j];
        //     }
        // }
        // // copy back
        // for (int i = 0; i < n; ++i)
        //     for (int j = 0; j < n; ++j)
        //         A[i][j] = B[i][j];

        reverse(A.begin(), A.end());
        
        for (int i = 0; i <= A.size()-1; i++) {
            for (int j = i + 1; j <= A[i].size()-1; j++) {
                swap(A[i][j], A[j][i]);
            }
        }
    
    }
};
