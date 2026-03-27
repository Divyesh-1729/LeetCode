class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int poscount = 0;
        int negcount = 0;

        for(int i :nums)
        {
            if(i>0)
            {
                poscount++;
            }
            else if(i<0)
            {
                negcount++;
            }
        }
        return max(poscount,negcount);
    }
};