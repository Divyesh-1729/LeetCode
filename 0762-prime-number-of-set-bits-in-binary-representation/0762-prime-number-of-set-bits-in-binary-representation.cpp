class Solution {
public:
    bool isPrime(int n)
    {
        if(n < 2) return false;

        for(int i = 2; i*i <= n; i++)
    {
            if(n % i == 0)
            return false;
    }
        return true;
    }


    int countBits(int n)
    {
        int cnt = 0;
        while(n)
        {
            n = n & (n - 1);
            cnt++;
        }
        return cnt;
    }


    int countPrimeSetBits(int left, int right) {
        int count  = 0;
        int  i = left;
        while(i<=right)
        {
            int bits = countBits(i);

            if(isPrime(bits))
                count++;

            i++;
        }
        return count;
    }
};