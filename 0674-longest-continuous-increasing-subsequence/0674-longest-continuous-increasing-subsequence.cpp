class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxi =1;
        for(int i =0;i<nums.size();i++)
        {
            int count  =1;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]>nums[j-1])
                {
                    count++;
                }
                else
                {
                    break;
                }
                
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};