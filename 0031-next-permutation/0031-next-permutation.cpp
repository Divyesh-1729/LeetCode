#include<algorithm>
#include <vector>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //next_permutation(nums.begin(),nums.end());

       

        int idx = -1;

 
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }

        
        if (idx != -1) {
            for (int i = nums.size() - 1; i > idx; i--) {
                if (nums[i] > nums[idx]) {
                    swap(nums[i], nums[idx]);
                    break;
                }
            }
        }

        
        reverse(nums.begin() + idx + 1, nums.end());
    }
};

//Find the breakppont, kuthe magchya value peksha greater value ahe, tyannatar just find just greater element than that, milala ki swap karun break karyahcya, then reverse fromm idx+2 to end

