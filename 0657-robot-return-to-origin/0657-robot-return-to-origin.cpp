class Solution {
public:
    bool judgeCircle(string moves) {
        int ud = 0;
        int lr = 0;

        for(char c:moves)
        {
            if(c=='R')
            {
                lr++;
            }
            if(c=='L')
            {
                lr--;
            }
            if(c=='U')
            {
                ud++;
            }
            if(c=='D')
            {
                ud--;
            }
        }
        if(ud==0 && lr==0)
        {
            return true;
        }
        return false;
    }
};