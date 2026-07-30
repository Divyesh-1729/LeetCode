class Solution {
public:
    int solve(int n, int k)
    {
        if(n==1 && k==1)
        {
            return 0;
        }

        int len = pow(2,n-1);
        int mid = len/2;
        int inter;

        if(k<=mid)
        {
            inter= solve(n-1,k);
        }
        if(k>mid)
        {
            inter= 1- solve(n-1,k-mid);
        }
        return inter;
    }
    int kthGrammar(int n, int k) {
        int ans = solve(n,k);
        return ans;
        
    }
};