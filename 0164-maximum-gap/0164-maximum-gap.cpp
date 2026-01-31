class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maxi = INT_MIN;
        sort(nums.begin(),nums.end());
        if(nums.size()<2)
        {
            maxi = 0;
            
        }
        for(int i =0;i<nums.size()-1;i++)
        {
            maxi = max(maxi,nums[i+1]-nums[i]);
        }
        
        return maxi;
    }
};