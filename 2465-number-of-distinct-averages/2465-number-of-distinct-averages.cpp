class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        vector<double>avgs;
        sort(nums.begin(),nums.end());
        int  i =0;
        int j = nums.size()-1;
        while(i<j)
        {
            double avg = (nums[i]+nums[j])/2.0;
            avgs.push_back(avg);
            i++;
            j--;
        }
        sort(avgs.begin(),avgs.end());

        int count = 1;
        for(int  i = 0;i<avgs.size()-1;i++)
        {
            if(avgs[i]!=avgs[i+1])
            {
                count++;
            }
        }
        return count;

    }
};