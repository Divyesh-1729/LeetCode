class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        for(int i = 0;i<words.size();i++)
        {
            string s = words[i];
            for(char it:s)
            {
                if(x==it)
                {
                    ans.push_back(i);
                    break;
                    
                }
                
            }
        }  
        return ans;
    }
};