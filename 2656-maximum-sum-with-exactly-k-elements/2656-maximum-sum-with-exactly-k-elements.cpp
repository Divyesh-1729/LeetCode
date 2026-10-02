class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        int n=nums.size();
        int score=0;
        sort(nums.begin(),nums.end());
        while(k--)
        {
            int num=nums.back();
            score=score+num;
            nums.push_back(num+1);
            sort(nums.begin(),nums.end());
            maxi=max(maxi,score);
        }
        return maxi;
    }
};