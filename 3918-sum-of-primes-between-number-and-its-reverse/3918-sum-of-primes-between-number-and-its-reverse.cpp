class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int start =n;
        int reversed =0;
        vector<int>primes;
        while(n > 0)
        {
            reversed=reversed*10 +n%10;
            n= n/10;
        }
        int end=reversed;

        if(start>end)
        {
            swap(start,end);
        }

        int sum =0;


        for(int i = start; i <= end; i++)
        {
            if(i< 2)
            {
                continue;
            }
            bool isprime = true;
            for(int j=2; j*j<= i;j++)
            {
                if(i%j==0)
                {
                    isprime=false;
                    break;
                }
            }
            if(isprime)
            {
                sum=sum+i;
            }
        }
        return sum;

    }
};