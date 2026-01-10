class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for(int i = nums.size()-1;i>=2;i--){
            if(nums[i]+nums[i-1]>nums[i-2] && nums[i-1]+nums[i-2]>nums[i] && nums[i]+nums[i-2] > nums[i-1])
            {
                sum+=nums[i]+nums[i-1]+nums[i-2];
                break;
            }
        }
        return sum;
    }
};