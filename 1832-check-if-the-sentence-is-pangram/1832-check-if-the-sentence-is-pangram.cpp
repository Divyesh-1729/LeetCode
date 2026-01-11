#include<map>
class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>mp;
        {
            for(char c = 'a'; c <= 'z'; c++)
            mp[c] = 0;
        }
        for(char ch : sentence)
        {
            mp[ch]++;

        }
        for(auto& it : mp)
        {
            if(it.second ==0)
            {
                return false;
                break;
            }
        }
        return true;
    }
};