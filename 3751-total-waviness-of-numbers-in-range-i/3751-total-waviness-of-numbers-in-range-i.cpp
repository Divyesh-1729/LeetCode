class Solution {
public:
    int find(int num)
    {
        int score =0;
        string s = to_string(num);
        for (int i = 1; i + 1 < s.size(); i++) {
                if ((s[i] > s[i - 1] && s[i] > s[i + 1]) ||
                    (s[i] < s[i - 1] && s[i] < s[i + 1])) {
                    score++;
                }
            }
            return score;

    }
    int totalWaviness(int num1, int num2) {
        int score =0;
        for(int num =num1;num<=num2;num++)
        {
            score = score + find(num);
        }
        return score;
    }
};