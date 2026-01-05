class Solution {
public:
    int minAddToMakeValid(string s) {
        int bal = 0, moves = 0;
        for (char c : s)
        {
            if (c == '(') bal++;
            else bal--;
            if (bal < 0)
            {
                bal = 0;
                moves++;
            }
        }
        moves += bal;
        return moves;
    }
};