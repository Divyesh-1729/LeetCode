class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for (int x : nums) {
            mp[x]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (mp[a] == mp[b])
                return a > b;          // same frequency → larger first
            return mp[a] < mp[b];      // smaller frequency first
        });

        return nums;
    }
};
