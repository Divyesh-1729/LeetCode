class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;

        for (char c : s) {
            if ((c >= 'a' && c <= 'z') ||
                (c >= 'A' && c <= 'Z') ||
                (c >= '0' && c <= '9')) {

                if (c >= 'A' && c <= 'Z')
                    c = c + 32;

                v.push_back(c);
            }
        }

        int i = 0, j = v.size() - 1;
        while (i < j) {
            if (v[i] != v[j])
                return false;
            i++;
            j--;
        }

        return true;
    }
};
