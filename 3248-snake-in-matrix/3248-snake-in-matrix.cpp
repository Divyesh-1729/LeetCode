class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int x= 0;
        int y =0;
        for(int i =0;i<commands.size();i++)
        {
            string s = commands[i];
            if(s=="UP")
            {
                x--;
            }
            if(s=="DOWN")
            {
                x++;
            }
            if(s=="LEFT")
            {
                y--;
            }
            if(s=="RIGHT")
            {
                y++;
            }
        }
        return (x * n) + y;
    }
};