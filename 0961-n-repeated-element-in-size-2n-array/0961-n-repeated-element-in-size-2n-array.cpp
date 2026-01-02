
#include<map>
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mp;
        int i=0;
        for(int i: nums)
        {
            mp[i]++;
        }
        for(int i:nums)
        {
            if(mp[i] == nums.size()/2)
            {
                return i;
            }
        }
        return 0;
    }
    
};