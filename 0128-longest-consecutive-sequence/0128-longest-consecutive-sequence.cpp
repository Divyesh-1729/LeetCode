class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int longest=1;
        int current=1;

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i]-1)
            {
                current++;
            }
            else if(nums[i-1]==nums[i])
            {
                continue;
            }
            else
            {
                current=1;
            }

            longest =max(current,longest);
        }
        return longest;
    }
};