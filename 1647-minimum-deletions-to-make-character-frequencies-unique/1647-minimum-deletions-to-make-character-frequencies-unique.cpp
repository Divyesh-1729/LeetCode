class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        vector<int>freq;
        for(auto& it:mp)
        {
            freq.push_back(it.second);
        }
        sort(freq.begin(),freq.end(),greater<int>() );

        int del=0;

        for(int i=1; i<freq.size();i++)
        {
            if(freq[i]>=freq[i-1])
            {
                int nfreq=max(0,freq[i-1]-1);

                del += freq[i]-nfreq;

                freq[i]=nfreq;
            }
        }

        return del;

    }
};