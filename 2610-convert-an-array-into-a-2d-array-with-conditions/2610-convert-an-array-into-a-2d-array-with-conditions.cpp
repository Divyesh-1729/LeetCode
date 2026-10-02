class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int rows=0;
        unordered_map<int,int>mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        for(auto &it:mp)
        {
            rows =max(rows,it.second);
        }
        vector<vector<int>>arr(rows);
        for(auto& it:mp)
        {
            int num=it.first;
            int occ=it.second;

            for(int i=0;i<occ;i++)
            {
                arr[i].push_back(num);
            }
        }


        return arr;


    }
};