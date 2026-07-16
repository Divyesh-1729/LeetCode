class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>pgcd(n);
        int maxi=0;

        for (int i=0; i< n;i++) 
        {
            maxi=max(maxi,nums[i]);
            pgcd[i]= gcd(nums[i], maxi);
        }

        sort(pgcd.begin(),pgcd.end());

        long long ans=0;
        for (int i=0; i<n/2;i++)
        {
            ans = ans+ gcd(pgcd[i],pgcd[n-1-i]);
        }

        return ans;


    }
};