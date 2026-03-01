class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
//         int count = 0;
//         int  n = arr.size();
        
//         for(int i=0;i<n;i++){
//     long long sum = 0;
//     for(int j=i;j<n;j++){
//         sum += arr[j];
//         if(sum%2==1)
//             count++;
//     }
// }
//         return count;
       
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