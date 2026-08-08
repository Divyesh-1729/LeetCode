class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int>diff(2051,0);
        for(auto& it:logs)
        {
            int birth = it[0];
            int death = it[1];

            diff[birth]++;
            diff[death]--;

            


        }
        int minyear = INT_MAX;
        int curr=INT_MIN;
        int maxi =INT_MIN;

        for(int year =1950;year<=2050;year++)
        {
            curr =curr+diff[year];
            if(curr>maxi)
            {
                maxi = curr;
                minyear = year;
            }
        }

        return minyear;
        
    }
};