class Solution {
public:
    bool isvowel(char ch)
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            {
                return true;
            }
            return false;
        }
    string sortVowels(string s) {
        vector<char>vowels;
        
        for(char& c:s)
        {
            if(isvowel(c))
            {
                vowels.push_back(c);
            }
        }
        sort(vowels.begin(),vowels.end());

        int j =0;

        for(int i=0;i<s.length();i++)
        {
            if(isvowel(s[i]))
            {
                s[i]=vowels[j];
                j++;
            }
        }
        return s;
    }
};