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

            if (nums[mid] == target)
            {
                 return mid;
            }
            if (nums[st] <= nums[mid]) {

                
                if (target >= nums[st] && target < nums[mid]) {
                    ed = mid - 1;
                }
                else {
                    st = mid + 1;
                }
            }
            else {

                // Target lies in right half
                if (target > nums[mid] && target <= nums[ed]) {
                    st = mid + 1;
                }
                else {
                    ed = mid - 1;
                }
            }
        }

        return -1;

        return -1;

    }
};