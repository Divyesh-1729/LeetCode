class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // vector<int>max;
        // int product = 0;
        // for(int i = 0;i<nums.size()-2;i++)
        // {
        //     product = nums[i] * nums[i+1] * nums[i+2];
        //     max.push_back(product);
        // }
        // int maxele = *max_element(max.begin(),max.end());
        // return maxele;

        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        
        
        int case1 = nums[n-1] * nums[n-2] * nums[n-3];
        int case2 = (nums[0] * nums[1] * nums[n-1]);
        
        int maxe = max(case1, case2);
        return maxe;

    }
};