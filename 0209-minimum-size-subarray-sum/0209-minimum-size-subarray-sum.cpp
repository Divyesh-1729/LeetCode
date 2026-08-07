class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum =0;
        int size = INT_MAX;

        int i =0;
        int  j=0;
        int n = nums.size();

        while(j<n)
        {
            sum = sum+nums[j];
            while(sum>=target)
            {
                size= min(size,j-i+1);
                sum = sum-nums[i];
                i++;

            }
            j++;
        }
        if(size==INT_MAX)
        {
            return 0;
        }
        return size;
    }
};