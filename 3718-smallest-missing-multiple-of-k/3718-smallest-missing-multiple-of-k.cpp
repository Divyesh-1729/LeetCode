class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        // if(k==1)
        // {
        //     return 101;
        // }
        for(int i:nums)
        {
            mp[i]++;
        }
        for(int i=1;i<INT_MAX;i++)
        {
            if(mp.find(i*k)==mp.end())
            {
                return i*k;
            }
        }
        return -1;
    }
};