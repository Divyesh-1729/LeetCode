class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>player;
        for(int i=1;i<=n;i++)
        {
            player.push_back(i);
        }

        int i =0;
        while(player.size()>1)
        {
            int index = (i+k-1)%player.size();
            player.erase(player.begin()+index);
            i=index;
        }
        return player[0];
    }
};