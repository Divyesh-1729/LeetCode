// class Solution {
// public:
//     int diagonalPrime(vector<vector<int>>& nums) {
//         int prime = 0;
//         vector<int>liesondiagonal;

        


//         for(int i = 0;i<nums.size();i++)
//         {
//             for(int j = 0;j<nums[i];j++)
//             {
//                 //Fucntiopn to check
//             bool isPrime(int nums[i][j]) {
//             if (nums[i][j] <= 1) 
//             {
//                 return false;
//             }
//             for (int i = 2; i * i <= nums[i][j]; i++)
//             if (nums[i][j] % i == 0) 
//             {
//                 return false;
//             }
//             return true;
//             }



//                 if(i==j && isPrime()==true)
//                 {
//                     liesondiagonal.push_back(nums[i][j]);
//                 }
//             }
//         }

//     }
// };
class Solution {
public:
    
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0) return false;
        return true;
    }
    
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<int> diagonal;
        
        for (int i = 0; i < n; i++) {
            diagonal.push_back(nums[i][i]);              
            diagonal.push_back(nums[i][n - i - 1]);      
        }
        
        int maxi = 0;
        for (int x : diagonal) {
            if (isPrime(x))
                maxi = max(maxi, x);
        }
        
        return maxi;
    }
};
