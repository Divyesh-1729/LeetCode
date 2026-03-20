class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ps(n,0);
        int count = 0;
        unordered_map<int,int>mp;
        mp[0]=1;
        ps[0] = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            ps[i] = ps[i-1]+nums[i];
        }
        for(int i = 0;i<ps.size();i++)
        {
            int rem = (ps[i] % k + k) % k;   //vvvvvvimppppp

            if(mp.find(rem)!=mp.end())
            {
                count = count+mp[rem];
            }

            mp[rem]++;
        }
        return count;
    }
};