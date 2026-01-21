class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // vector<int>ans(2,0);
        // for(int i = 0;i<numbers.size()-1;i++)
        // { 
        //     for(int j = i+1;j<numbers.size();j++)
        //     {
        //         if(numbers[i]+numbers[j] == target)
        //         {
        //             ans[0] = i+1;
        //             ans[1] = j+1;
        //             break;
        //         }
        //     }
        // }
        // return ans;

        
        int l = 0, r = numbers.size() - 1;

        while (l < r) {
            int sum = numbers[l] + numbers[r];

            if (sum == target)
                return {l + 1, r + 1};
            else if (sum < target)
                l++;
            else
                r--;
        }
        return {};

    }
};