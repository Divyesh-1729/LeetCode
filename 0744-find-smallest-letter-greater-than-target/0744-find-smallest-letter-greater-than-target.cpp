class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = 'a';
        for(char i : letters)
        {
            if(i >target)
            {
                ans = i;
                return ans;
            }
        }
        return letters[0];
    }
};