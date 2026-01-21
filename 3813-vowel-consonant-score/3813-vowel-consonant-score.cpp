class Solution {
public:
    int vowelConsonantScore(string s) {
        int v = 0;
        int c = 0;
        int score = -1;

        for (char ch : s) {
            ch = tolower(ch);  //He mi visarto

            if (ch >= 'a' && ch <= 'z') {
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    v++;
                } else {
                    c++;
                }
            }
        }

        if (c > 0) {
            score = v / c;
            return score;
        } else {
            return 0;
        }
    }
};
