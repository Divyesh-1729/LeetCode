class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        // vector<int>diff(2051,0);
        // for(auto& it:logs)
        // {
        //     int birth = it[0];
        //     int death = it[1];

        //     diff[birth]++;
        //     diff[death]--;

            


        // }
        // int minyear = INT_MAX;
        // int curr=INT_MIN;
        // int maxi =INT_MIN;

        // for(int year =1950;year<=2050;year++)
        // {
        //     curr =curr+diff[year];
        //     if(curr>maxi)
        //     {
        //         maxi = curr;
        //         minyear = year;
        //     }
        // }

        // return minyear; ///DIfference array approach

        vector<vector<int>>events;

        for(auto& log:logs)
        {
            events.push_back({log[0],+1});
            events.push_back({log[1],-1});

        }

        sort(events.begin(),events.end());

        int currPop =INT_MIN;
        int maxpop =INT_MIN;
        int minyear =INT_MAX;
        
        for(auto& event:events)
        {
            currPop = currPop +event[1];

            if(currPop>maxpop)
            {
                maxpop =currPop;
                minyear =event[0];
            }
        }

        return minyear;
        
    }
};