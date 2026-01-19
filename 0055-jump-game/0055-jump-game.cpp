class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxjmp = 0;
        for(int  i =0;i<nums.size();i++)
        {
            if(maxjmp < i)
            {
                return false;
            }
            else
            {
                maxjmp = max(maxjmp, i + nums[i]);
            }
        }
        return true;
    }
};