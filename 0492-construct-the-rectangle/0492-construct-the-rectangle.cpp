class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> ans(2, 0);

        for (int i = 1; i <= area; i++)
         {
            if (area % i == 0) 
            {
                int j = area / i;
                if (j >= i) 
                {
                    ans[0] = j;
        
                 ans[1] = i;
                }
            }
        }
        return ans;
    }
};
