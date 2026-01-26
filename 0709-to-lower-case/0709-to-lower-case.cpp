class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";
        for(char ch : s )
        {
            ch = tolower(ch);
            ans =ans +ch;
        }
        return ans;
    }
};