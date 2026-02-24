class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double>averages;
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i < nums.size()/2; i++)
        {
            int j = nums.size() - 1 - i;

            double avg = (nums[i] + nums[j])/2.0;
            averages.push_back(avg);
        }
        
        return *min_element(averages.begin(), averages.end());
    }
};