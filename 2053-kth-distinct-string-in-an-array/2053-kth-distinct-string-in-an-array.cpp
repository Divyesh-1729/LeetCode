class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map< string , int>mp;
        for(string ch : arr)
        {
            mp[ch]++;
        }
        for(string s : arr) 
        {
            if(mp[s] == 1) 
            {
                k--;
                if(k == 0) 
                {
                    return s;
                }
            }
        }
        return "";
    }
};