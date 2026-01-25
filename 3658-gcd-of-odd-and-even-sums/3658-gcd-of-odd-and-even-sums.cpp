class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddsum=0,evensum=0;
        for(int i=1;i<=n*2;i++)
        {
            if(i%2==0)
                evensum = evensum+i;
            else if(i%2==1)
                oddsum= oddsum+i;
        }
        return gcd(oddsum,evensum);
    }
};