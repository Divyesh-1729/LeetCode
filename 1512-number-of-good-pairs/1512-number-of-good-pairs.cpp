class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans =0;
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]].push_back(i);
        }
        for (auto& it:mp) {
            int n=it.second.size();
            ans= ans+ n*(n-1)/2;
        }
        return ans;
        
    }
};