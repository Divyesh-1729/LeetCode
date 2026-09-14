class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini =*min_element(nums.begin(),nums.end());
        int maxi =*max_element(nums.begin(),nums.end());

        int numbertobemade = nums[nums.size()/2];
        int count =0;
        for(int i=0;i<nums.size();i++)
        {
            count = count+abs(numbertobemade-nums[i]);
        }
        return count;
    }
};