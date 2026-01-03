class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        for(char ch : s)
        {
            mp[ch]++;
        }
        for(char ch : t)
        {
            if(mp[ch]==0)
            {
                return ch;
            }
            mp[ch]--; //He mi vaisarto..Ithe jar already more than 1 asel tar jast present ahe so count 1 ne kami hoil
        }
        return ' ';
    }
};