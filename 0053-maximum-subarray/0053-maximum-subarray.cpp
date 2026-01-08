class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int n = nums.size();
        // int sum = 0 ;

        // int maxsum = INT_MIN;
        // for(int i = 0; i<n;i++)
        // {   int sum = 0 ;
        //     for(int j = i;j<n;j++)
        //     {
        //         sum = sum+ nums[j];
        //          maxsum = max(sum,maxsum);
        //     }
           
        // }
        // return maxsum;
        int maxtillnow = nums[0];
        int maxforthis = nums[0];

        for(int i=1;i< nums.size();i++)
        {
            maxforthis = max(nums[i],maxforthis+ nums[i]);

            maxtillnow = max(maxforthis,maxtillnow);
        }
        return maxtillnow;
        
    }
};