class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n =score.size();
        vector<string>ans;
        vector<int>sorted = score;
        sort(sorted.begin(),sorted.end(),greater<int>());
        unordered_map<int,int>mp;
        for(int i=0;i<sorted.size();i++)
        {
            mp[sorted[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            int rank = mp[score[i]];

            if(rank==0)
            {
                ans.push_back("Gold Medal");
            }
            else if(rank==1)
            {
                ans.push_back("Silver Medal");
            }
            else if(rank==2)
            {
                ans.push_back("Bronze Medal");
            }
            else
            {
                ans.push_back(to_string(rank+1));
            }
        }

        return ans;



    }
};