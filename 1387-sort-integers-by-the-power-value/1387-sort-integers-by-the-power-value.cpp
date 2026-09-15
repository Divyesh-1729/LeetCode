class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>ans;
        for(int x=lo;x<=hi;x++)
        {
            long long i=x;
            int pow=0;
            while(i!=1)
            {
                if(i%2==0)
                {
                    i = i/2;
                    pow++;
                }
                else
                {
                    i =(3*i)+1;
                    pow++;
                }
            }
            ans.push_back({pow,x});

        }

        sort(ans.begin(),ans.end());
        return ans[k-1].second;
    }
};