class Solution {
public:
int m;
int resultant = INT_MIN;

void solve(int idx, int count, int n, vector<int>& result,vector<vector<int>>& requests )
{
    if(idx>=m)
    {
        bool allzero= true;

        for(int &x:result)
        {
            if(x!=0)
            {
                allzero=false;
                break;
            }
        }

        if(allzero==true)
        {
            resultant = max(resultant, count);
        }
        return;
    }

    int from = requests[idx][0];
    int to = requests[idx][1];

    result[from]--;
    result[to]++;

    solve(idx+1,count+1,n,result, requests);

    result[from]++;
    result[to]--;

    solve(idx+1,count,n,result, requests);




}
    int maximumRequests(int n, vector<vector<int>>& requests) {
        m = requests.size();

        vector<int>result(n,0);

        solve(0,0,n, result, requests);

        return resultant;
    }
};