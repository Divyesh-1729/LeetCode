class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int x=-1;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]== target)
        //     {
        //         x=i;
        //         break;
        //     }
        // }
        // return x;
        int st = 0, ed = nums.size() - 1;

        while (st <= ed) {
            int mid = st + (ed - st) / 2;

            if (nums[mid] == target) return mid;

            // Check if the left half is sorted
            if (nums[st] <= nums[mid]) {
                if (nums[st] <= target && target < nums[mid]) {
                    ed = mid - 1;
                } else {
                    st = mid + 1;
                }
            } 
            // Otherwise, the right half must be sorted
            else {
                if (nums[mid] < target && target <= nums[ed]) {
                    st = mid + 1;
                } else {
                    ed = mid - 1;
                }
            }
        }

        return -1;

    }
};