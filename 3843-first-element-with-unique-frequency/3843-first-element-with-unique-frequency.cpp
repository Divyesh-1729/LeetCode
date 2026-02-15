class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mp;
        unordered_map<int,int>count;
        int x = 0;
        for(int i : nums)
        {
            mp[i]++;
        }
        for(auto& it: mp)
        {
        count[it.second]++;
        }
        for(int x : nums)
        {
            if(count[mp[x]] == 1)
            {
                return x;
            }
        }
        return  -1;
    }
};