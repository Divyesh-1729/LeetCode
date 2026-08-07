class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long result =0;
        int n = nums.size();
        long long sum =0;

        int i=0;
        int j =0;

        while(j<n)
        {
            sum = sum+nums[j];

            while(i<=j && (sum*(j-i+1))>=k)
            {
                sum = sum-nums[i];
                i++;
            }


            result = result +(j-i+1);

            j++;
        }
        return result;
    }
};