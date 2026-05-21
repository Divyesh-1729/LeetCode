class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,bool>mp;
        for(int num:arr1)
        {
            while(num>0)
            {
                mp[num] = true;
                num =num/10;

            }
        }
        int count =0;
        for(int num:arr2)
        {
            while(num>0)
            {
                if(mp[num])
            {
                count = max(count, (int)to_string(num).length());
                break;
            }
                num= num/10;
            }
        }
        return count;
    }
};