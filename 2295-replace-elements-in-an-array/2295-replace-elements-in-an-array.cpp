class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int>mp;
        int m=operations.size();
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        for(int i=0;i<m;i++)
        {
            int oldval=operations[i][0];
            int newval=operations[i][1];

            int idx = mp[oldval];
            nums[idx]=newval;
            mp[newval]=idx;
            mp.erase(oldval);
        }
        return nums;
    }
};