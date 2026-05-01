class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        //First find the sum then the F(0) and then at last the formaula dervied
        //Hvae for loop fpr finding the iterative F
        int n = nums.size();
        int sum =0;
        int F =0;
        for(int i =0;i<n;i++)
        {
            sum  = sum + nums[i];
            F = F + i*nums[i];
        }
        int result = F;
        for(int k =0;k<n;k++)
        {
            int newF  = F + sum - n*nums[n-1-k];
            result = max(result,newF);
            F = newF;
        }
        return result;
    }
};