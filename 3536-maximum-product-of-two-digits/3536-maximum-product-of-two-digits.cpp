class Solution {
public:
    int maxProduct(int n) {
        vector<int>digits;
        while(n>0)
        {
            int digit = n%10;
            digits.push_back(digit);
            n=n/10;
        }
        int maxi=0;
        for(int i=0;i<digits.size();i++)
        {
            for(int j=i+1;j<digits.size();j++)
        {
            maxi=max(maxi, digits[i]*digits[j]);
        }
        }
        return maxi;
    }
};