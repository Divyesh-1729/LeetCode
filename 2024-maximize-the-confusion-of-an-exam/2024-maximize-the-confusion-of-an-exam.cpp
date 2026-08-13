class Solution {
public:
    int maxConsecutiveAnswers(string key, int k) {
        int n=key.size();
        int i=0;
        int j=0;
        int count =0;
        unordered_map<char,int>mp;


        while(j<n)
        {
            mp[key[j]]++;
            while(min(mp['F'],mp['T'])>k)
            {
                mp[key[i]]--;
                i++;
            }
            count = max(count, j-i+1);

            j++;
        }
        return count;
    }
};