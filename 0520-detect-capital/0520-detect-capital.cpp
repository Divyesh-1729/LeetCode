#include<string>
class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int capcount = 0;
        for(int i =0;i<n;i++)
        {
            if(isupper(word[i]))
            {
                capcount++;
            }
            
        }
        if(capcount ==0 || capcount ==1 && isupper(word[0])|| capcount==n)
        {
            return true;
        }
        return n== capcount;
    }
};