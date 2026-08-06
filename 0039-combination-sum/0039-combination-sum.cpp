class Solution {
public:
vector<vector<int>>result;
    void solve(vector<int>& candidates,int target,vector<int>& curr, int index)
    {
        if(target==0)
        {
            result.push_back(curr);
            return;
        }
        if(target<0 || index== candidates.size())
        {
            return;
        }
        curr.push_back(candidates[index]);

        solve(candidates,target-candidates[index],curr, index);

        curr.pop_back();

        solve(candidates,target,curr, index+1);


    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<int>curr;

        solve(candidates, target, curr,0);

        return result;
        
    }
};