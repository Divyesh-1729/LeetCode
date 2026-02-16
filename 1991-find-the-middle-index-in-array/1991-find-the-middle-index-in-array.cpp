class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefixsum(n,0);

        prefixsum[0] = nums[0];
        for(int i = 1;i<nums.size();i++)
        {
            prefixsum[i] = prefixsum[i-1]+nums[i];
        }
        for(int i = 0;i<nums.size();i++)
        {
        int left;
        if(i==0)
        {
            left = 0;
        }
        else
        {
            left = prefixsum[i-1];
        }
        int right = prefixsum[n-1]-prefixsum[i];

        if(left==right)
        {
            return i;
        }
        }
        return -1;
    }
};