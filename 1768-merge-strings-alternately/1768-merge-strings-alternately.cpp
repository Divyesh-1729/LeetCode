class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        //Twopointer approach
        int j = 0;
        int  i = 0;
        string res = "";

        while(i < word1.size() ||j < word2.size())
        {
            if(i < word1.size())
            {
                res = res + word1[i++];
                
            }
            if(j < word2.size())
            {
                res = res + word2[j++];
            }
        }
        return res;

    }
};