class Solution {
public:
    vector<vector<int>> ans;
    unordered_map<int, bool> used;

    void solve(vector<int>& nums, vector<int>& temp) {
        // Base case
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (used[i] == true) continue;

            // Choose
            used[i] = true;
            temp.push_back(nums[i]);

            // Explore
            solve(nums, temp);

            // Unchoose (Backtrack)
            temp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        solve(nums, temp);
        return ans;
    }
};