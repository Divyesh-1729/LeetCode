class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int>arr;
        for(int i : nums)
        {
            if(i%2==0)
            {
                arr.push_back(0);
            }
            else
            {
                arr.push_back(1);
            }
        }
        int n = arr.size();
        int count = 0;
        vector<int>prefixsum(n,0);
        unordered_map<int,int>mp;

        prefixsum[0] = arr[0];
        for(int i = 1;i<arr.size();i++)
        {
            prefixsum[i] = prefixsum[i-1] +arr[i];
        }
        for(int i = 0;i<prefixsum.size();i++)
        {
            if(prefixsum[i]==k)
            {
                count++;
            }
            int val = prefixsum[i] - k;
            if(mp.find(val)!=mp.end())
            {
                count  =count + mp[val];
            }

            if(mp.find(prefixsum[i])==mp.end())
            {
                mp[prefixsum[i]] = 0;
            }
            mp[prefixsum[i]]++;
        }

        

    return count;
    }
};