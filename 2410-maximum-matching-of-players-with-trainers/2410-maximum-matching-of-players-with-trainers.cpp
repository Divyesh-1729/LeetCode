class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n =players.size();
        int m =trainers.size();
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int count =0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(players[i]<=trainers[j])
                {
                    count++;
                    trainers.erase(trainers.begin()+j);
                    m--;
                    break;
                }
            }
        }
        return count;
    }
};