class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans;
        unordered_map<int,int>mp;
        for(auto& match:matches)
        {
            int winner = match[0];
            int looser = match[1];

            if(mp.find(winner)==mp.end())
            {
                mp[winner] = 0;
            }

            mp[looser]++;
        }
        vector<int>winner;
        for(auto& it:mp)
        {
            if(it.second==0)
            {
                winner.push_back(it.first);
            }
        }
        
        vector<int>lostone;
        for(auto& it:mp)
        {
            if(it.second==1)
            {
                lostone.push_back(it.first);
            }
        }

        sort(winner.begin(),winner.end());
        sort(lostone.begin(),lostone.end());

        ans.push_back(winner);
        ans.push_back(lostone);
        return ans;
    }
};