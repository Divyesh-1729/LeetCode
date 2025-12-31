class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int count1 = 0;
            int count2 = 0;

            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i])
                    count1++;
                else if (nums[j] == nums[i] + 1)
                    count2++;
            }

            if (count1 > 0 && count2 > 0) {
                ans = max(ans, count1 + count2);
            }
        }
        return ans;
    }
};
