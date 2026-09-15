class Solution {
public:
    int maxDistance(string moves) {
        int x=0;
        int y=0;

        int count =0;

        for(char ch:moves)
        {
            if(ch=='L')
            {
                x--;
            }
            else if(ch=='R')
            {
                x++;
            }
            else if(ch=='U')
            {
                y++;
            }
            else if(ch=='D')
            {
                y--;
            }
            else
            {
                count++;
            }

        }
        return abs(x)+abs(y)+count;
    }
};