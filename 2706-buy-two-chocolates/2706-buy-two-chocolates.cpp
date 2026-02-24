class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int moneyleft = money;
        int count = 0;
        for(int i =0;i<prices.size();i++)
        {
            if(prices[i]<=moneyleft && count <2)
            {
                moneyleft = moneyleft-prices[i];
                count++;

            }
        }

        if(count == 2)
        {
            return moneyleft;
        }

        return money;
        
    }
};