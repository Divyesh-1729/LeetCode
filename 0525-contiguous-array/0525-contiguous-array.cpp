class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
  
        mp[0]=-1;
        int result =0;


        int sum =0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                sum = sum+(-1);
            }
            if(nums[i]==1)
            {
                sum = sum+1;
            }
            if(mp.find(sum)!=mp.end())
            {
                result  =max(result,i-mp[sum]);
            }
            else
            {
                mp[sum]=i;
            }
        }
        return result;
    }
};

//n3 madhe every subarrya visist karun check karaycha not optimal
//n2 madhe pan same but increment constant thevaycha
