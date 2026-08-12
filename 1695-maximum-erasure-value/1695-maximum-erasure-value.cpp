class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int score =0;
        int i =0;
        int j=0;
        int n = nums.size();
        int sum =0;
        unordered_map<int,int>mp;
        while(j<n)
        {
            mp[nums[j]]++;
            sum = sum+nums[j];
            while(mp[nums[j]]>1)
            {
                mp[nums[i]]--;
                sum = sum-nums[i];
                i++;
            }
            score= max(score,sum);
            j++;
        }
        return score;

    }
};