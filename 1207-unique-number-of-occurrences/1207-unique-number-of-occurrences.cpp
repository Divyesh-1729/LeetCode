class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        vector<int>nums;
        for(int i  : arr)
        {
            mp[i]++;
        }
        for(auto&it: mp)
        {
            nums.push_back(it.second);
        }
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                return false;
            }
        }
        return true;

    }
};