class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n =nums.size();
        int len =INT_MIN;
        unordered_map<int,int>mp;
        int i=0;
        int j=0;

        while(j<n)
        {
            mp[nums[j]]++;
            
            while(mp[nums[j]]>k)
            {
                mp[nums[i]]--;
                i++;
            }


            len =max(len, j-i+1);


            j++;
        }
        return len;
    }
};