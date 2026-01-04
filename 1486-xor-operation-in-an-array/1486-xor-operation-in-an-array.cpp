class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>nums;
        int x = 0;
        for(int i =0 ; i< n; i++)
        {
            nums.push_back(start + (2 * i));

        }
        for(int i = 0;i<nums.size();i++)
        {
            x = x ^ nums[i];
        }
        return x;

    }
};