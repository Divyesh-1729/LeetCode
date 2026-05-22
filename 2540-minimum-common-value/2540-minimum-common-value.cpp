class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int>mp;
       int mini =INT_MAX;
       for(int i:nums1)
       {
        mp[i]++;
       }

       for(int i:nums2)
        {
            if(mp[i]> 0)
            {
                mini= min(mini, i);
            }
        }
       
       if(mini==INT_MAX)
       {
        return -1;
       }
       return mini;

    }
};