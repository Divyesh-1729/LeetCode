class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        char ch =+ '0'+digit;
        int count  =0;
        for(int i:nums)
        {
            string s = to_string(i);
            for(char c:s)
            {
                if(c== ch)
                {
                    count++;
                }
            }
        }
        return count;
    }
};