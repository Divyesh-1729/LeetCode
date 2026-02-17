class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int count = 0;
        vector<int>prefixsum(n,0);
        unordered_map<int,int>mp;

        prefixsum[0] = nums[0];
        for(int i = 1;i<nums.size();i++)
        {
            prefixsum[i] = prefixsum[i-1] +nums[i];
        }
        for(int i = 0;i<prefixsum.size();i++)
        {
            if(prefixsum[i]==goal)
            {
                count++;
            }
            int val = prefixsum[i] - goal;
            if(mp.find(val)!=mp.end())
            {
                count  =count + mp[val];
            }

            if(mp.find(prefixsum[i])==mp.end())
            {
                mp[prefixsum[i]] = 0;
            }
            mp[prefixsum[i]]++;
        }

        

    return count;
    }
};