class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>arr;
        //int min = *min_element(nums.begin(),nums.end());
        //int max = *max_element(nums.begin(),nums.end());

        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size()-1;i++)
        {
            for (int x = nums[i]+ 1; x <nums[i + 1]; x++)
            {
                arr.push_back(x);
            }
        }
        return arr;
    }
};