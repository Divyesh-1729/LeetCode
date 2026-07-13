class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>nums;

            for (int start = 1; start <= 8; start++) {
            int num = start;

            for (int next = start + 1; next <= 9; next++) {
                num = num * 10 + next;

                if (num >= low && num <= high)
                    nums.push_back(num);
            }
            }



        sort(nums.begin(),nums.end());
        return nums;
    }
};