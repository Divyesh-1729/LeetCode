class Solution {
public:
    bool isUgly(int n) {
        // for (int i=2; i<6 && n; i++)
        //     while (n % i == 0)
        //     n = n / i;
        // return n == 1;

        if(n <= 0) return false;
        while(n>0)
        {
            if(n %2 ==0) n = n/2;
            else if (n % 3 ==0) n = n/3;
            else if (n % 5 ==0) n = n/5;
            else break;

        }
        return (n==1);
    }
};