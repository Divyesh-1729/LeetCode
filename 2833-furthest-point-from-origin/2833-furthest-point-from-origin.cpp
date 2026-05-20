class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int dist =0;
        int blank=0;
        
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='L')
            {
                dist--;
            }
            else if(moves[i]=='R')
            {
                dist++;
            }
             else
            {
               blank++;
            }
        }
        return abs(dist)+blank;
    }
};