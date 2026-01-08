#include<algorithm>
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // int s = 0;
        // int e = nums.size() - 1;
        // int mid = s + (e-s)/2;
        // int largest = *max_element(nums.begin(), nums.end());
        // while (s<e)
        // {
        //     if(nums[mid] == largest)
        //    { 
        //     return mid;
        //    }
        //    if(nums[mid] < largest)
        //    {
        //       s = mid +1;
        //    }
        //      if(nums[mid] > largest)
        //    {
        //       e = mid -1;
        //    }
        // }
        // return mid;

        //Linear search
        for(int i = 1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1])
            {
                return i-1;
            }
        }
        return nums.size()-1;


    }
};