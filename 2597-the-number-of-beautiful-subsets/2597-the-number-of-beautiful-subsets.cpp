class Solution {
public:
int result =0;

    void solve(vector<int>& nums,int k,unordered_map<int,int>& mp,int idx)
    {
        if(idx>=nums.size())
        {
            result++;
            return;
        }

        if (mp[nums[idx]+k]==0 &&mp[nums[idx]- k]==0)
        {
            mp[nums[idx]]++;
            solve(nums,k,mp,idx+1);
            mp[nums[idx]]--;
        }

        solve(nums,k,mp,idx+1);
    }
    int beautifulSubsets(vector<int>& nums, int k) {

        unordered_map<int,int>mp;
        solve(nums,k,mp,0);

        return result-1;
        
    }
};