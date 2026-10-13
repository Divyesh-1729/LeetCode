class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        long long smallsum=0;
        long long bigsum=0;
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++)
        {
            smallsum =smallsum+nums[i];
        }
        for(int i=n/2;i<n;i++)
        {
            bigsum=bigsum+nums[i];
        }
        return bigsum-smallsum;
    }
};