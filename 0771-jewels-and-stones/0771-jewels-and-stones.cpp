class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> mp;
        int count = 0;

        for(char ch : stones) {
            mp[ch]++;
        }

        for(char i : jewels) {
            if(mp[i] > 0) {
                count += mp[i];
            }
        }
        return count;
    }
};
