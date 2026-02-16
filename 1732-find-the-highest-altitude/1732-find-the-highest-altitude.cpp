class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>prefixsum(gain.size()+1,0);
        
        prefixsum[1] = gain[0];

        for(int i = 1;i<=gain.size();i++)
        {
            prefixsum[i] = prefixsum[i-1]+gain[i-1];
        }
        int max = *max_element(prefixsum.begin(),prefixsum.end());
        return max;
    }
};