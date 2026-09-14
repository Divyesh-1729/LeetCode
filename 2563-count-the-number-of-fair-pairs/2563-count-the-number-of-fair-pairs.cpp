class Solution {
public:
    long long countPairs(vector<int>& nums, long long target) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        long long cnt=0;

        while (l<r) //Save people boats logic sarkha
        {
            if (nums[l]+nums[r]<=target) 
            {
                cnt = cnt+(r-l);
                l++;
            }
            else 
            {
                r--;
            }
        }
        return cnt;
    }

    long long countFairPairs(vector<int>& nums, int lower, int upper) 
    {
        sort(nums.begin(),nums.end());
        return countPairs(nums,upper)-countPairs(nums,(long long)lower-1);
    }
};