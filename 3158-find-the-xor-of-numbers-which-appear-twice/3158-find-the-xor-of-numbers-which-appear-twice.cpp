class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>twice;
        int ans = 0;
        for(int i : nums)
        {
            mp[i]++;
        }
        for(auto& it:mp)
        {
            if(it.second==2)
            {
                twice.push_back(it.first);
            }
        }
        for(int x : twice)
        {
            ans = ans ^ x;
        }

        return ans;

    }
};