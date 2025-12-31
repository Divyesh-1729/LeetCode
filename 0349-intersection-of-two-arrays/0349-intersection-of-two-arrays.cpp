class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<int> res;

        for(int i = 0; i < nums1.size(); i++) {
            mp[nums1[i]] = 1;
        }

        for(int j = 0; j < nums2.size(); j++) {
            if(mp[nums2[j]] == 1) {
                res.push_back(nums2[j]);
                mp[nums2[j]] = 0;
            }
        }

        return res;
    }
};
