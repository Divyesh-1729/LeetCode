class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans;
        for(int i=n;i<100;i++)
        {
            int formed=1;
            int temp=i;
            
            while(temp>0)
            {
                int digit = temp%10;
                temp =temp/10;
                formed= formed*digit;

            }

            if(formed%t==0)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};