#include <cmath>
class Solution {
public:


bool isPrime(int n) {
    if (n <= 1) return false;

    int limit = sqrt(n);   
    for (int i = 2; i <= limit; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}


    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int i : nums)
        {
            mp[i]++;
        }
        for(auto& it : mp)
        {
            if(isPrime(it.second))
            {
                return true;
            }
        }
        return false;
    }
};