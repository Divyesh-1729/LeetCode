class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int ans =1;
        for(int i =0 ;i<st.size();i++)
        {
            if(st.find(ans)!=st.end())
            {
                ans=ans*2;
            }
        }
        return ans;
    }
};