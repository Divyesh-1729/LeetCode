class Solution {
public:
    int minOperations(int n) {
        // vector<int>nums(n,0);
        // for(int i = 0;i<n;i++)
        // {
        //     nums[i] = (2 * i) + 1;
        // }
        // int x = 0;
        // int sum = 0;
        // for(int i : nums)
        // {
        //     sum = sum + i;
        // }

//         int x = 0;
//         int y = n - 1;
//         int operations = 0;

//         while (x < y) {
//             operations += (n - (2 * x + 1));
//             x++;
//             y--;
//         }

//         return operations;
//     }
// };
        return (n*n)/4;
    }
};

