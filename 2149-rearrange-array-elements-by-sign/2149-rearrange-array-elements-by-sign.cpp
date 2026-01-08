class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v1;
        vector<int>v2;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                v1.push_back(nums[i]);
            }
            else
            {
                v2.push_back(nums[i]);
            }
        }
        vector<int> ans(nums.size());
        int p = 0, n = 0;

        for (int i = 0; i < ans.size(); i++) {
            if (i % 2 == 0)  
            {    
                ans[i] = v1[p];
                p++;
            }
            else  
            {              
                ans[i] = v2[n];
                n++;
            }
        }
        return ans;
    }
};