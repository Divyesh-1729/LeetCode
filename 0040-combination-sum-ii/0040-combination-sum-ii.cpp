class Solution {
public:
vector<vector<int>>result;
    void solve(vector<int>& candidates,int target, int index,vector<int>& curr)
    {
        if(target<0)
        {
            return;
        }
        if(target==0)
        {
            result.push_back(curr);
            return;
        }

        for(int i= index;i<candidates.size();i++)
        {
            if(i>index &&candidates[i]==candidates[i-1])
            {
                continue;
            }
            else
            {
                curr.push_back(candidates[i]);
                solve(candidates,target-candidates[i], i+1,curr);
                curr.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>curr;

        sort(candidates.begin(),candidates.end());

        solve(candidates,target, 0,curr);

        return result;
        
    }
};