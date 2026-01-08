class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // if(nums.size()==0)
        // {
        //     return -1;
        // }
        // if(nums.size()==1)
        // {
        //     for(int i : nums)
        //     {
        //         return i;
        //     }
        // }
        // int maxtillnow = 0;
        // for(int i =0;i<nums.size();i++)
        // {
        //     int temppro=0;
        //     {
        //         for(int j=i;j<nums.size()-1;j++)
        //         {
        //             int pro = nums[i] * nums[i+1];
        //             int temppro = max(temppro,pro);
        //         }
        //     }
        //     maxtillnow = max(maxtillnow, temppro);
        // }
        // return maxtillnow;
         
        int n = nums.size();
        int ans = nums[0];

        for (int i = 0; i < n; i++) {
            int prod = 1;
            for (int j = i; j < n; j++) {
                prod *= nums[j];
                ans = max(ans, prod);
            }
        }

        return ans;
    

    }
};