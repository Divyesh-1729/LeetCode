class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans = INT_MIN;

        sort(nums.begin(),nums.end());
        int n = nums.size();


        int i=0;
        int j= n-1;

        while(i<j)
        {
            int maxi= nums[i]+nums[j];
            ans = max(maxi,ans);
            i++;
            j--;
        }

        return ans;

    }
};