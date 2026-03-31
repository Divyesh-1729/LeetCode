class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        int ans = 0;
        for(int i : nums)
        {
            mp[i]++;
        }
        for(auto& it:mp)
        {
            if(it.second>floor(n/2))
            {
                ans = it.first;
            }
        }
        return ans;

    }
};