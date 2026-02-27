class Solution {
public:
      bool check(string& word) 
      {
        int i = 0;
        int j = word.size()-1;
        while(i<j)
        {
            if(word[i]!=word[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
      } 
    string firstPalindrome(vector<string>& words) {
        string ans="";

        for(int i = 0;i<words.size();i++)
        {
            string word = words[i];
            if(check(words[i]))
            {
                ans = words[i];
                break;
            }
        }
        return ans;
    }
};