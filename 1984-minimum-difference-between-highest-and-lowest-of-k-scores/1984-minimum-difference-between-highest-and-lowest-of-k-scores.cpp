class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int diff = 0;
        int mini = INT_MAX;

        for(int i = 0;i<nums.size()-k+1;i++)
        {
            diff  = nums[i+k-1]-nums[i];
            mini  = min(mini, diff);
        }
        return mini;

    }
};