class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int>target;
        vector<int>ans(n,0);
        for(int  i =0;i<n;i++)
        {
            target.insert(target.begin()+index[i],nums[i]);
        }
        return target;
    }
};