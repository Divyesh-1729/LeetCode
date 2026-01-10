class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for(char i : s)
        {
            mp[i]++;

        }

        int length = 0;
        bool Oddahe = false;

        for(auto &it : mp)
        {
            int freq = it.second;
            if(freq %2 ==0)
            {
                length = length + freq;
            }
            else
            {
                length = length + (freq-1);
                Oddahe = true;
            }


        }

        if(Oddahe == true)
        {
            length = length +1;
        }
        return length;

    }
};