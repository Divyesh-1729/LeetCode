class Solution {
public:
    vector<vector<int>>result;
    void solve(int start, int n,int k,vector<int>& add )
    {
        if(k==0)
        {
            result.push_back(add);
            return;
        }
        if(start>n)
        {
            return;
        }

        add.push_back(start);
        solve(start+1,n,k-1,add);
        add.pop_back();
        solve(start+1,n,k,add);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>add;

        solve(1,n,k,add);

        return result;

    }
};