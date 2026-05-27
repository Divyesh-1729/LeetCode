class Solution {
public:
    int numberOfSpecialChars(string word) {

        int n = word.size();

        unordered_map<char,int> lowerl;
        unordered_map<char,int> upperf;

        for(int i = 0; i < n; i++)
        {
            char c = word[i];

            if(islower(c))
            {
                lowerl[c] = i;
            }
            else
            {
                char lower = tolower(c);

                if(upperf.find(lower) == upperf.end())
                {
                    upperf[lower] = i;
                }
            }
        }

        int cnt = 0;

        for(auto it : lowerl)
        {
            char ch = it.first;

            if(upperf.find(ch) != upperf.end() &&
               lowerl[ch] < upperf[ch])
            {
                cnt++;
            }
        }

        return cnt;
    }
};