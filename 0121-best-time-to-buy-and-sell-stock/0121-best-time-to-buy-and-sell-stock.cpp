// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
        
        // if (prices.size() < 2) 
        // {
        //     return 0;
        // }
        // int maxp = 0;
        // for (int i = 0; i < prices.size(); ++i)
        // {   
        //     for (int j = i + 1; j < prices.size(); ++j)
        //     {
        //         int profit = prices[j] - prices[i];
        //         if (profit > maxp) maxp = profit;
        //     }
        // }
        // return maxp;

        class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (buyPrice > prices[i]) {
                buyPrice = prices[i];
            }

            profit = max(profit, prices[i] - buyPrice);
        }

        return profit;        
    }
};
    



//This is th brute force solution it might not be optimal, O(n) is ht emost optimal 