class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
       int MOD = 1000000007;
       int evenCount = 1;
       int prefix = 0;
       int oddCount = 0;
       int res = 0;
       for(int  num : arr)
       {
        prefix = prefix + num;
        if(prefix%2!=0)
        {
            oddCount = oddCount+1;
            res = res + evenCount;
        }
        else
        {
            evenCount = evenCount+1;
            res = res+ oddCount;
        }
         res = res %MOD;
       }

       res = (int) res;
       return res;
       
    }
};