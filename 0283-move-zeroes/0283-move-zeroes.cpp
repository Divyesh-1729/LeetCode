class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // for(int i =0; i< nums.size()-1;i++)
        // {
        //     for(int j = i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]==0)
        //         {
        //             swap(nums[i],nums[j]);
        //         }
        //     }
        // }
        int n = nums.size();

        vector<int>ans;
        for(int i : nums)
        {
            if(i!=0)
            {
                ans.push_back(i);
            }
        }
        int len = nums.size() - ans.size();
        for(int i = 0; i<len;i++)
        {
            ans.push_back(0);
        }
        nums = ans;
        
    }
};