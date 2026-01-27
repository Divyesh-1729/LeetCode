class Solution {
public:

    int signFunc(vector<int>& nums, int pro)
    {
        for(int i = 0;i < nums.size();i++)
        {
            if(nums[i] == 0)
            {
                  return 0;
            }
            if(nums[i] < 0)
            {
            pro = -pro;
            }
        }
        return pro;
    }

    int arraySign(vector<int>& nums) {
        int pro = 1;
        pro = signFunc(nums, pro);

        if(pro > 0)
        {
        return 1;
        }
        if(pro < 0)
        {
            return -1;
        }
        return 0;
    }
};
