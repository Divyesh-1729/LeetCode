class Solution {
public:
    int subtractProductAndSum(int n) {
       int product = 1;
       int sum  = 0;
       int temp = n;
       while(temp > 0) 
       {
        int i = temp % 10;
        temp = temp /10;
        product = product * i;
       }
       temp = n;
        while(temp > 0) 
       {
        int j = temp % 10;
        temp = temp /10;
        sum = sum + j;
       }
       return product - sum;
    }
};