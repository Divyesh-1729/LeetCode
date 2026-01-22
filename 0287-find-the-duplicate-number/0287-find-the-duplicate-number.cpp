class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int found = 0;
        // for(int i = 0;i<nums.size()-1;i++)
        // {
        //     for(int j = i+1;j<nums.size();j++)
        //     {
        //         if(nums[i] == nums[j])
        //         {
        //             found = nums[i];
        //         }
        //     }
        // }
        // return found;
        vector<int>sorted(nums.size());
        sorted = nums;
        sort(sorted.begin(),sorted.end());
        int found =0;

        for(int  i = 0;i < sorted.size()-1;i++)
        {
            if(sorted[i]==sorted[i+1])
            {
                found = sorted[i];
            }
        }
        return found;

    }
};