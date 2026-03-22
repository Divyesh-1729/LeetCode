#include<numeric>
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        vector<int>count;
        unordered_map<int,int>mp;
        for(int i : deck)
        {
            mp[i]++;
        }
        for(auto& it:mp)
        {
            count.push_back(it.second);
        }
        int result = count[0];

    for (int i =1; i <count.size(); i++)
    {
        result=gcd(result, count[i]);
    }
    if(result<2)
    {
        return false;
    }
    return true;



    }
};