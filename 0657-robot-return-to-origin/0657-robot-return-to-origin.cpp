class Solution {
public:
    bool judgeCircle(string moves) {
        int ud = 0, lr = 0;

        for (char c : moves) {
            if (c == 'U') 
            {
                ud++;
            }
            else if (c == 'D') 
            {
                ud--;
            }
            else if (c == 'L') 
            {
                lr--;
            }
            else if (c == 'R') 
            {
                lr++;
            }
        }

        if(ud == 0 && lr == 0)
        {
            return true;
        }
        return false;
    }
};
