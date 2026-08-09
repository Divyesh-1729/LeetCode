class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>result;
        int currmax = *max_element(candies.begin(),candies.end());
        for(int i:candies)
        {
            if((i+extraCandies)>=currmax)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }
        return result;
    }
};