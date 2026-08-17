class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int len=INT_MIN;
        int i=0;
        int j=0;
        int bitwiseand;
        int n=nums.size();
        int mask=0;

        while(j<n)
        {
            while((mask & nums[j])!=0)
            {
                mask= mask ^ nums[i];
                i++;
            }

            mask= mask|nums[j];


            len=max(len,j-i+1);
            j++;
        }




        return len;



    }
};