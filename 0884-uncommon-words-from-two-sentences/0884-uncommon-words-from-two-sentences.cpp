class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mp;


        int i = 0;
        string word="";
        while(i<s1.size())
        {
            if(s1[i]!=' ')
            {
                word =word+s1[i];
            }
            else
            {
                if(!word.empty())
                {
                    mp[word]++;
                    word="";

                }
                
            }
            i++;
        }

        if(!word.empty())
        {
            mp[word]++;
        }

        int j=0;
        string word1 = "";
        while(j<s2.size())
        {
            if(s2[j]!=' ')
            {
                word1 = word1+s2[j];
            }
            else
            {
                if(!word1.empty())
                {
                    mp[word1]++;
                    word1="";
                }

                
            }
            j++;
        }
        if(!word1.empty())
        {
            mp[word1]++;
        }












        vector<string>ans;
        for(auto& it:mp)
        {
            if(it.second==1)
            {
                ans.push_back(it.first);                
            }
        }
        return ans;

    }
};