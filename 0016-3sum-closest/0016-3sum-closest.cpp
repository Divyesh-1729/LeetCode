class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int closest= 100000;

        for(int i=0;i<=nums.size()-3;i++)
        {
            int j=i+1;
            int k=n-1;

            while(j<k)
            {
                int sum = nums[i]+nums[j]+nums[k];

                if(abs(target-sum)<=abs(target-closest))
                {
                    closest=sum;
                }

                if(sum>target)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        return closest;
    }
};