class Solution {
public:
int n;
bool isunique(string& s)
{
    vector<int>freq(26,0);

        for(char c: s) {
            if(freq[c- 'a']++)
                return false;
        }

        return true;
}
int solve(vector<string>& arr,int idx, string curr)
{
    if(idx==n)
    {
        return curr.length();
    }
    int notpick= solve(arr,idx+1,curr);
    int pick=0;

    string temp=curr +arr[idx];

        if(isunique(temp)) 
        {
            pick=solve(arr,idx +1,temp);
        }

        return max(pick, notpick);
}
    int maxLength(vector<string>& arr) {
        n = arr.size();
        int ans = solve(arr,0,"");
        return ans;
    }
};