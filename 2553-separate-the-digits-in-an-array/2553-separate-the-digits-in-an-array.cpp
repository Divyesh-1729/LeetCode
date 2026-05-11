class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>digits;
        for(int i =0;i<nums.size();i++)
        {
            vector<int>temp;
            while(nums[i]>0)
            {
                int digit = nums[i] %10;
                nums[i] = nums[i]/10;
                temp.push_back(digit);

            }
            reverse(temp.begin(), temp.end());

            for(int digit:temp) 
            {
                digits.push_back(digit);
            }
        }
        return digits;
    }
};