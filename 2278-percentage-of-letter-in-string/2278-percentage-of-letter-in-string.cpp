class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count  =0;
        int n = s.length();
        for(char ch:s)
        {
            if(ch==letter)
            {
                count++;
            }
        }
        return (count*100/n) ;
    }
};