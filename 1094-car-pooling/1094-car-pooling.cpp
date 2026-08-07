class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>diff(1001,0);
        for(auto& it:trips)
        {
            int cnt =it[0];
            int start = it[1];
            int end = it[2];
            

            diff[start]= diff[start]+cnt;
            diff[end]= diff[end]-cnt;


        }

        int ans =0;

        for(int i=0;i<1000;i++)
        {
            ans = ans+diff[i];

            if(ans>capacity)
            {
                return false;
            }
        }

        return true;

    }
};