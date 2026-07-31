class Solution {
public:
vector<int>result;

void solve(int curr, int n)
{
    if(curr>n)
    {
        return;
    }

    result.push_back(curr);

    for (int i = 0; i <= 9; i++) {
            int next = curr*10 + i;

            if (next> n)
                return;
            
            solve(next,n);
        }






}
    vector<int> lexicalOrder(int n) {
        for(int start=1;start<=9;start++)
        {
            solve(start, n);

        }
        return result;
    }
};